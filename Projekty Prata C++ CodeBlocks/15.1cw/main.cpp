#include <iostream>

using namespace std;

class Tv;

class Remote
{
      public:
        friend class Tv;
         enum{NORMAL,INTERRACT};
         enum { TV, DVD };
     private:
        int mode; // kontroluje TV lub DVD
        int interract;


    public:

        Remote(int m = TV) : mode(m) {}
        bool volup(Tv & t);
        bool voldown(Tv & t);
        void onoff(Tv & t);
        void chanup(Tv & t);
        void chandown(Tv & t);
        void set_chan(Tv & t,int c);
        void set_mode(Tv & t);
        void set_input(Tv & t);
        void show_interact(){cout<<"tryb "<<(interract==NORMAL?" NORMAL":" INTERRACT")<<endl;}


};



class Tv
{
    public:

        friend class Remote; // klasa Remote ma dostêp do prywatnych danych Tv

        enum { Off, On };
        enum { MinVal, MaxVal = 20 };
        enum { Antenna, Cable };
        enum { TV, DVD };

        Tv(int s = Off, int mc = 125) : state(s), volume(5),
        maxchannel(mc), channel(2), mode(Cable), input(TV) {}
        void onoff() {state = (state == On) ? Off : On;}
        bool ison() const {return state == On;}
        bool volup();
        bool voldown();
        void chanup();
        void chandown();
        void set_mode() {mode = (mode == Antenna) ? Cable : Antenna;}
        void set_input() {input = (input == TV) ? DVD : TV;}
        void settings() const; // wyœwietla wszystkie ustawienia
        bool change_mode_remote(Remote & r);
    private:
        int state; // w³¹czony lub wy³¹czony
        int volume; // zak³adamy, ¿e mo¿na g³oœnoœæ wyraziæ liczb¹
        int maxchannel; // maksymalna liczba kana³ów
        int channel; // aktualnie w³¹czony program
        int mode; // antena lub telewizja kablowa
        int input; // telewizja lub DVD
};



       bool Tv::change_mode_remote(Remote & r)
       {
           if(!state)
            return false;
           else r.interract=(r.interract==Remote::NORMAL)?Remote::INTERRACT:Remote::NORMAL;
            return true;
       }
       inline  bool Remote::volup(Tv & t) { return t.volup();}
       inline  bool Remote::voldown(Tv & t) { return t.voldown();}
       inline  void Remote::onoff(Tv & t) { t.onoff();}
       inline  void Remote::chanup(Tv & t) {t.chanup();}
       inline  void Remote::chandown(Tv & t) {t.chandown();}
       inline  void Remote::set_chan(Tv & t, int c) {t.channel = c;}
       inline  void Remote::set_mode(Tv & t) {t.set_mode();}
       inline  void Remote::set_input(Tv & t) {t.set_input();}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
bool Tv::volup()
{
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
        return false;
}

bool Tv::voldown()
{
    if (volume > MinVal)
    {
        volume--;
        return true;
    }
    else
        return false;
}

void Tv::chanup()
{
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;
}

void Tv::chandown()
{
    if (channel > 1)
        channel--;
    else
        channel = maxchannel;
}

void Tv::settings() const
{
    using std::cout;
    using std::endl;
    cout << "Telewizor jest " << (state == Off ? "Wy³¹czony" : "W³¹czony") << endl;
    if (state == On)
    {
        cout << "G³oœnoœæ = " << volume << endl;
        cout << "Program = " << channel << endl;
        cout << "Tryb = "
            << (mode == Antenna ? "antena" : "kabel") << endl;
        cout << "Wejœcie = "
            << (input == TV ? "TV" : "DVD") << endl;
    }
}

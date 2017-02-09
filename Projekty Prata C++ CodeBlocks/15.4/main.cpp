#include <iostream>

using namespace std;

class Tv;




class Remote{

public:
    enum{off,on};
    enum{MinVal,MaxVal=30};
    enum{Antenna,Cable};
    enum{TV,DVD};

private:
    int mode;
public:
    Remote(int m=TV):mode(m){}

    bool volup(Tv & t);
    bool voldown(Tv & t);
    void onoff(Tv & t);
    void chanup(Tv & t);
    void chandown(Tv & t);
    void set_chan(Tv & t,int c);
    void set_mode(Tv & t);
    void set_input(Tv & t);







};
class Tv{
public:
    friend void Remote::set_chan(Tv & t,int c);
    enum{off,on};
    enum{MinVal,MaxVal=30};
    enum{Antenna,Cable};
    enum{TV,DVD};


    Tv(int s=off,int mc=125):state(s),volume(5),maxchannel(mc),channel(2),mode(Cable),input(TV){}
    void onoff(){state=(state==on)?off:on;}
    bool ison()const {return state==on;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode(){mode=(mode==Antenna)?Cable:Antenna;}
    void set_input(){input=(input==TV)?DVD:TV;}
    void settings()const;
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;

};
    bool Tv::volup()
    {
        if(volume<MaxVal)
        {
            volume++;
            return true;
        }
        else
            return false;
    }
    bool Tv::voldown()
    {
            if(volume>MinVal)
        {
            volume--;
            return true;
        }
        else
            return false;

    }
    void Tv::chanup()
    {
       if(channel<maxchannel)
       {

           channel++;

       }
       else
        channel=1;

    }
       void Tv::chandown()
       {
           if(channel>1)
            channel--;
           else
            channel=maxchannel;

       }


    void Tv::settings()const
    {

        cout<<"telewizor jest "<<(state==off?"wylaczony":"wlaczony")<<endl;
        if(state==on)
        {
            cout<<"glosnosc= "<<volume<<endl;
            cout<<"program= "<<channel<<endl;
            cout<<"tryb= "<<(mode==Antenna?"antena":"kabel")<<endl;
            cout<<"wejscie="<<(input==TV?"TV":"DVD")<<endl;


        }
    }


     inline bool Remote::volup(Tv & t){return t.volup();}
     inline bool Remote::voldown(Tv & t){return t.voldown();}
     inline void Remote::onoff(Tv & t){t.onoff();}
     inline void Remote::chanup(Tv & t){ t.chanup();}
     inline void Remote::chandown(Tv & t){ t.chandown();}
     inline void Remote::set_chan(Tv & t,int c){t.channel=c;}
     inline void Remote::set_mode(Tv & t){t.set_mode();}
     inline void Remote::set_input(Tv & t){t.set_input();}




int main()
{


    Tv s42;
    cout<<"poczatkowe ustawienia telewizora 42\":\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout<<"\n nowe ustawienia telewizora s42\":\n";
    s42.settings();
      Remote grey;
      grey.set_chan(s42,10);
      grey.volup(s42);
        grey.volup(s42);
          cout<<"\n  ustawienia telewizora s42 po uzyciu pilota\":\n";
    s42.settings();
     Tv s58(Tv::on);
     s58.set_mode();
     grey.set_chan(s58,28);
     cout<<"ustawienia telewizora s58\":\n";
      s58.settings();

    cout << "Hello world!" << endl;
    return 0;
}

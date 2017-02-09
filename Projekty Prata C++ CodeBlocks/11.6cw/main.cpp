#include <iostream>
#include <cstdlib>

using namespace std;
class Stone{
public:
  enum Mode{STONE,FUNTS,FUNTS_PERCENTAGE};
private:

    enum{lbs_per_stn=14};
    int stone;
    double pds_left;
    double pounds;
    Mode mode;
public:
     Stone(double lbs);
    Stone(int stn,double lbs);
    Stone();
    ~Stone();
    void set_mode(Mode mod){mode=mod;}
    Stone operator+(const Stone &s)const;
    Stone operator-(const Stone &s)const;
    Stone operator*(const double n)const;
    friend Stone operator*(const double n,const Stone &s);
    Stone operator/(const double n)const;
    friend Stone operator/(const double n,const Stone &s);
    friend ostream & operator<<(ostream &os,const Stone &s);
    bool operator<(const Stone &s)const;
    bool operator>(const Stone &s)const;
    bool operator<=(const Stone &s)const;
    bool operator>=(const Stone &s)const;
    bool operator!=(const Stone &s)const;
    bool operator==(const Stone &s)const;
    int ile_kam(){return stone;}


    operator int()const;
    operator double()const;



};


int main()
{
    int j;
    int kamienie;
    int funty;
    int minim;
    int minim_stone;
    int maxim;
    int maxim_stone;

    bool tabik[6]{false,false,false,false,false,false};


Stone tab[6]={
{11,4},
{12,4},
{7,2},

};


for(j=3;j<6;j++)
{
    cout<<"podaj liczbe kamieni dla obiektu nr "<<j+1<<":";
    cin>>kamienie;
    cout<<"podaj liczbe funtow dla obiektu nr "<<j+1<<":";
    cin>>funty;
    tab[j]=Stone(kamienie,funty);



}


for(int k=0;k<6;k++)
{
    if(k==0)
    {
        minim=k;
        minim_stone=tab[k].ile_kam();
        maxim_stone=0;

    }

    minim=(tab[k].ile_kam()<minim_stone)?k:minim;
    minim_stone=(tab[k].ile_kam()<minim_stone)?tab[k].ile_kam():minim_stone;

    maxim=(tab[k].ile_kam()>maxim_stone)?k:maxim;
    maxim_stone=(tab[k].ile_kam()>minim_stone)?tab[k].ile_kam():maxim_stone;



    if(tab[k].ile_kam()>11)
    {
        tabik[k]=true;
    }


}
cout<<"wartosc najwieksza to "<<maxim_stone<<" na pozycji nr: "<<maxim+1<<endl;
cout<<"wartosc najmniejsza to "<<minim_stone<<" na pozycji nr: "<<minim+1<<endl;
cout<<"wartosci wieksze od 11 kamieni to: \n";
for(int l=0;l<6;l++)
{

    if(tabik[l]==true)
    {

       cout<<"wartosc "<<tab[l].ile_kam()<<" na pozycji nr: "<<l+1<<endl;
    }
}





    Stone poppi(9,2.8);
    Stone konik(12,13.2);
    cout<<konik<<endl;

    konik.set_mode(Stone::Mode(2));
    cout<<konik<<endl;

    konik.set_mode(Stone::STONE);
    cout<<konik<<endl;

    konik.set_mode(Stone::FUNTS);
    cout<<konik<<endl;


    konik.set_mode(Stone::FUNTS_PERCENTAGE);
    cout<<konik<<endl;

bool i;
i=(konik<poppi);
cout<<"(konik<poppi)= "<<i<<endl;
i=(konik>poppi);
cout<<"(koni>poppi)= "<<i<<endl;
i=(konik<=poppi);
cout<<"(konik<=poppi)= "<<i<<endl;
i=(konik>=poppi);
cout<<"(konik>=poppi)= "<<i<<endl;
i=(konik!=poppi);
cout<<"(konik!=poppi)= "<<i<<endl;
i=(konik==poppi);
cout<<"(konik==poppi)= "<<i<<endl;


    cout << "Hello world!" << endl;


    cout<<"\n\ndziala zajebiscie!!!!!1"<<endl;
    return 0;
}
    Stone::Stone(double lbs)
    {

        stone =int(lbs)/lbs_per_stn;
        pds_left=int(lbs)%lbs_per_stn+lbs-int(lbs);
        pounds=lbs;
        mode=STONE;
    }

    Stone::Stone(int stn,double lbs)
    {
        stone=stn;
        pds_left=lbs;
        pounds=stn*lbs_per_stn;
        mode=STONE;
    }

    Stone::Stone()
    {
        stone=pounds=pds_left=0;
        mode=STONE;
    }

   Stone:: ~Stone()
    {

    }

    Stone Stone::operator+(const Stone &s)const
    {
        return Stone(stone+s.stone,pds_left+s.pds_left);

    }

    Stone Stone::operator-(const Stone &s)const
    {

        return Stone(stone-s.stone,pds_left-s.pds_left);
    }

    Stone Stone::operator*(const double n)const
    {

        return Stone(stone*n,pds_left*n);
    }

     Stone operator*(const double n,const Stone &s)

    {
        return Stone(n*s.stone,n*s.pds_left);

    }
    Stone Stone::operator/(const double n)const
    {
        return Stone(stone/n,pds_left/n);

    }

    Stone operator/(const double n,const Stone &s)
    {

        return Stone(n/s.stone,n/s.pds_left);
    }

    ostream & operator<<(ostream &os,const Stone &s)
    {
        if(s.mode==Stone::STONE)
        os<<"kamieni="<<s.stone<<endl;
        else if(s.mode==Stone::FUNTS)
        os<<"funtow: "<<s.pounds<<" oraz "<<s.pds_left<<" czesci "<<endl;
        else if(s.mode==Stone::FUNTS_PERCENTAGE)
        os<<"funtow: "<<s.pounds<<endl;
        else

        {
        os<<"blad trybu!!\n";
        exit(1);

        }

return os;

    }


    Stone::operator int()const
    {
        return int (pounds+0.5);
    }
    Stone::operator double()const
    {
        return pounds;
    }



   bool Stone::operator<(const Stone &s)const
   {
       return (stone<s.stone);

   }

    bool Stone::operator>(const Stone &s)const
    {

        return (stone>s.stone);
    }

    bool Stone::operator<=(const Stone &s)const
    {
        return (stone<=s.stone);

    }

    bool Stone::operator>=(const Stone &s)const
    {

        return (stone>=s.stone);
    }

    bool Stone::operator!=(const Stone &s)const
    {

        return (stone!=s.stone);
    }

    bool Stone::operator==(const Stone &s)const
    {

        return (stone==s.stone);

    }


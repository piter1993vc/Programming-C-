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




};



int main()
{




    Stone poppins(9,2.8);
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



    cout << "Hello world!" << endl;
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




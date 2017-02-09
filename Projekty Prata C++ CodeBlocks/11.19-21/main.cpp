#include <iostream>

using namespace std;
class Stone{
private:
    enum{lbs_per_stn=14};
    int stone;
    double pds_left;
    double pounds;
public:
     Stone(double lbs);
    Stone(int stn,double lbs);
    Stone();
    ~Stone();
    void show_lbs()const;
    void show_stn()const;
    operator int()const;
     operator double()const;





};
int main()
{




    Stone poppins(9,2.8);
    double p_wt=(double)poppins;
    cout<<"konwersja na typ double=>";
    cout<<"poppins: "<<p_wt<<"funtow \n";
     cout<<"konwersja na typ int=>";
    cout<<"poppins: "<<int (poppins)<<"funtow \n";




    cout << "Hello world!" << endl;
    return 0;
}
    Stone::Stone(double lbs)
    {
        stone =int(lbs)/lbs_per_stn;
        pds_left=int(lbs)%lbs_per_stn+lbs-int(lbs);
        pounds=lbs;
    }
    Stone::Stone(int stn,double lbs)
    {
        stone=stn;
        pds_left=lbs;
        pounds=stn*lbs_per_stn;
    }
    Stone::Stone()
    {
        stone=pounds=pds_left=0;
    }
   Stone:: ~Stone()
    {

    }
    void Stone::show_lbs()const
    {
       cout<<pounds<<" kamieni "<<endl;
    }
    void Stone::show_stn()const
    {
         cout<<stone<<" kamieni "<<pds_left<<" funtow "<<endl;
    }
    Stone::operator int()const
    {
        return int (pounds+0.5);
    }
    Stone::operator double()const
    {
        return pounds;
    }

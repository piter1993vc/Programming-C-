#include <iostream>
#include <cmath>
#define PI 3.14
const double rad_to_kat=180/PI;
using namespace std;
struct kartezjan{
double x;
double y;

};
struct biegun{
double distance;
double kat;
};



void show_pole(biegun s);
biegun rename(kartezjan str);

int main()
{
    kartezjan str;
    biegun str2;
    cout<<"podaj odleglosc x oraz y: ";
    while(cin>>str.x>>str.y)
    {
        str2=rename(str);
        show_pole(str2);

         cout<<"ponownie podaj odleglosc x oraz y: ";


    }
    cout << "Hello world!" << endl;
    return 0;
}
void show_pole(biegun s)
{
    cout<<"odleglosc= "<<s.distance<<endl;
    cout<<"kat=       "<<s.kat*rad_to_kat<<endl;


}
biegun rename(kartezjan str)
{
    biegun strukturka;

    strukturka.distance=sqrt(str.x*str.x+str.y*str.y);
    strukturka.kat=atan2(str.y,str.x);




    return strukturka;


}

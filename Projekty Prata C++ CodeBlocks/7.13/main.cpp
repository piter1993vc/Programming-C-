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



void show_pole(biegun *s);
void rename(kartezjan *str1,biegun *str2);

int main()
{
    kartezjan str;
    biegun str2;
    cout<<"podaj odleglosc                x oraz y: ";
    while(cin>>str.x>>str.y)
    {
        rename(&str,&str2);
        show_pole(&str2);

         cout<<"ponownie podaj odleglosc x oraz y: ";


    }
    cout << "Hello world!" << endl;
    return 0;
}
void show_pole(biegun *s)
{
    cout<<"odleglosc= "<<s->distance<<endl;
    cout<<"kat=       "<<s->kat*rad_to_kat<<endl;


}
void rename(kartezjan *str1,biegun *str2)
{


    str2->distance=sqrt(str1->x*str1->x+str1->y*str1->y);
    str2->kat=atan2(str1->y,str1->x);







}

#include <iostream>

using namespace std;

int main()
{
    const float feed_to_cal=12.0;
    const float cal_to_metr=0.0254;
    const float funty_to_kg=1/2.2;
    cout<<"podaj swoj wzrost w stopach"<<endl;
    double stopy;
    cin>>stopy;

        cout<<"podaj swoj wzrost w calach"<<endl;
    double cale;
    cin>>cale;

            cout<<"podaj swoja wage w funtach"<<endl;
    double funty;
    cin>>funty;

    double wzrost=cale+stopy*feed_to_cal;
    wzrost=wzrost*cal_to_metr;
    funty*=funty_to_kg;


    double BMI=funty/(wzrost*wzrost);
    cout<<"twoj poziom BMI to "<<BMI<<endl;













    return 0;
}

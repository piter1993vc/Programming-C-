#include <iostream>

using namespace std;

int main()
{

    cout << "dlugosc geograficzna" << endl;
    cout<<"podaj stopnie:"<<endl;
    double stopnie;
    cin>>stopnie;


     cout<<"podaj minuty:"<<endl;
    int minuty;
    cin>>minuty;

     cout<<"podaj sekundy:"<<endl;
    int sekundy;
    cin>>sekundy;

    double stopnie2=stopnie+minuty/60.0+sekundy/3600.0;

    cout<<stopnie<<" stopni "<<minuty<<" minut "<<sekundy<<" sekund to "<<stopnie2<<" stopni"<<endl;


    return 0;
}

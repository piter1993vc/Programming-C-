#include <iostream>

using namespace std;

int main()
{
    cout << "podaj liczbe sekund" << endl;
    long long sekundy;
    cin>>sekundy;
int dni=sekundy/(24*3600);
int godziny=(sekundy-dni*24*3600)/3600;
int minuty=(sekundy-dni*24*3600-godziny*3600)/60;
int sek=(sekundy-dni*24*3600-godziny*3600-minuty*60);


cout<<dni<<"  "<<godziny<<"  "<<minuty<<" "<<sek<<endl;
    return 0;
}

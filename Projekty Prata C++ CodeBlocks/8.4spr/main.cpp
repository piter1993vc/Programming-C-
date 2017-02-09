#include <iostream>

using namespace std;
struct pudelko
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float pojemnosc;
};
void show(const pudelko &str);
void filler(pudelko &str);
int main()
{
    pudelko pudlo{"kapuleti",12.3,14.2,18.4};
    show(pudlo);
    filler(pudlo);
    show(pudlo);
    cout << "Hello world!" << endl;
    return 0;
}
void show(const pudelko &str)
{
    cout<<"producent: "<<str.producent<<endl;
    cout<<"wysokosc: "<<str.wysokosc<<endl;
    cout<<"szerokosc: "<<str.szerokosc<<endl;
    cout<<"dlugosc: "<<str.dlugosc<<endl;
    if(str.pojemnosc>0.0)
    cout<<"pojemnosc: "<<str.pojemnosc<<endl;

}

void filler(pudelko &str)
{
    str.pojemnosc=str.wysokosc*str.dlugosc*str.szerokosc;

}

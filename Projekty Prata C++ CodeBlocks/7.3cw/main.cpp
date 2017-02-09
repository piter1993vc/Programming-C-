#include <iostream>

using namespace std;
struct pudlo{
char producent[40];
float wysokosc;
float szerokosc;
float dlugosc;
float objetosc;


};
void show(pudlo str);
void filler(pudlo *str);
int main()
{

    pudlo pudeleczko{"kaszaloty",12.3,43.4,32.1};
 filler(&pudeleczko);
 show(pudeleczko);


    return 0;
}
void show(pudlo str)
{
cout<<"producent: "<<endl;
cout<<str.producent;
cout<<"\nwysokosc: "<<endl;
cout<<str.wysokosc;
cout<<"\nszerokosc: "<<endl;
cout<<str.szerokosc;
cout<<"\ndlugosc: "<<endl;
cout<<str.dlugosc;
cout<<"\nobjetosc: "<<endl;
cout<<str.objetosc;
}
void filler(pudlo *str)
{
    str->objetosc=(str->wysokosc)*(str->szerokosc)*(str->dlugosc);

}

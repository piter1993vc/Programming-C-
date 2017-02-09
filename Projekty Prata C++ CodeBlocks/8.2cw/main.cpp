#include <iostream>

using namespace std;
struct Batonik{
char marka[30];
double waga;
int kalorie;
};
void seter(Batonik &str, const char *wsk="Millennium Munch",double wart=2.85,int cal=350);
void show(const Batonik &s);
int main()
{
    Batonik b1;
    Batonik b2;
    seter(b1);
    seter(b2,"koktajlowy",12.40,345);
    show(b1);
    show(b2);

    cout << "Hello world!" << endl;
    return 0;
}
void seter(Batonik &str,const char *wsk,double wart,int cal)
{
    int i=0;
    while(*wsk)
    {
         str.marka[i]=*wsk;
         wsk++;
         i++;

    }
    str.marka[i]='\0';
    str.waga=wart;
    str.kalorie=cal;



}
void show(const Batonik &s)
{

    cout<<"marka: "<<s.marka<<endl;
    cout<<"waga: "<<s.waga<<endl;
    cout<<"kalorie: "<<s.kalorie<<endl;
}

#include <iostream>
#include <array>


using namespace std;

int main()
{
    double za_sztuke=56.70;
    array<int,12> a;
    const char *miesiace[12]{
    "styczen",
    "luty",
    "marzec",
    "kwiecien",
    "maj",
    "czerwiec",
    "lipiec",
    "sierpien",
    "wrzesien",
    "pazdziernik",
    "listopad",
    "grudzien"
    };
    int i;
   ;
   double sum=0;
    for(i=0;i<12;i++)
    {
    cout << "podaj miesieczna sprzedaz za meesiac: " <<miesiace[i]<< endl;
    cin>>a[i];

     sum+=a[i];

    }
    cout<<"sprzedales "<<sum<<" ksiazek za"<<sum*za_sztuke<<" [zl]"<<endl;



    return 0;
}

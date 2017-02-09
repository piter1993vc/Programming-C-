#include <iostream>
#include <array>


using namespace std;

int main()
{
    double za_sztuke=56.70;
    array<int,12> a[3];
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
    int j;

   double sum[3]{};
   for(j=0;j<3;j++)
   {
       cout<<"rok "<<j+1<<endl;
    for(i=0;i<12;i++)
    {
    cout << "podaj miesieczna sprzedaz za meesiac: " <<miesiace[i]<< endl;
    cin>>a[j][i];

     sum[j]+=a[j][i];

    }
   }
   for(j=0;j<3;j++)
   {
      cout<<"w "<<j+1<<" roku sprzedales "<<sum[j]<<" ksiazek za"<<sum[j]*za_sztuke<<" [zl]"<<endl;
   }
   int sumka=sum[0]+sum[1]+sum[2];
cout<<"calkowita sprzedaz to "<<sumka<<" sztuk za :"<<sumka* za_sztuke<<" [zl]"<<endl;



    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout<<"podaj liczbe dodatnia calkowita rozna od zera: ";
    cin>>liczba;
    int suma;
    while(liczba!=0)
    {
        suma=0;
      for(int i=1;i<liczba;i++)
      {
          suma+=i;

      }
      cout<<"suma wczesniejszych liczb to "<<suma<<endl;
      suma=0;
         cout<<"podaj kolejna liczbe dodatnia calkowita rozna od zera: ";
         cin>>liczba;


    }

    cout << "podales 0 koniec synek" << endl;
    return 0;
}

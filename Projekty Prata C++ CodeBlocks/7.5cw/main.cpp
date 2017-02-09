#include <iostream>

using namespace std;
int silnia(int licz);
int main()
{

    int liczba;
    cout<<"podaj dodatnia liczbe calkowita lub litere aby zakonczyc: ";
    while((cin>>liczba))
    {
        cout <<liczba<<"! to: "<<silnia(liczba) <<endl;
       cout<<"podaj kolejna dodatnia liczbe calkowita lub litere aby zakonczyc: ";

    }

cout<<"koniec!!!!";
cin.clear();
cin.get();

    return 0;
}
int silnia(int licz)
{
    int wart=licz;

       if(licz>0)
       {
             wart*=silnia(licz-1);
            return wart;
       }

            else
                return 1;

}

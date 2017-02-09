#include <iostream>
#include <string>
#include <cstring>
#include <new>

using namespace std;
struct chaff
{
    char imie[20];
    int liczba;



};
char buffer[512];

int main()
{
    string imie;

    int wybor;
    chaff *tab;
    cout << "podaj wersje ktora chcesz wybrac:" << endl;
    cout<<"1)operator new miejscowy  2)operator new zwykly: "<<endl;
    while(cin>>wybor&&(wybor==1||wybor==2))
    {

        if(wybor==1)
        {
            tab=new (buffer) chaff[2];

        }

        if(wybor==2)
        {
           tab=new chaff[2];


        }
        for(int i=0;i<2;i++)
        {

        cout<<"podaj imie"<<endl;
        cin>>tab[i].imie;
        cout<<"podaj liczbe"<<endl;
        cin>>tab[i].liczba;
        }
           for(int i=0;i<2;i++)
        {

        cout<<"imie ";
        cout<<tab[i].imie<<endl;
        cout<<"liczba ";
        cout<<tab[i].liczba<<endl;
        }
        if(wybor==2)
            delete []tab;

    cout << "podaj wersje ktora chcesz wybrac:" << endl;
    cout<<"1)operator new miejscowy  2)operator new zwykly: "<<endl;




    }


    return 0;
}


#include <iostream>

using namespace std;
const int arr=6;
int main()
{
    float wplywy[6]{};
    cout<<"sprawdzam podatnosc na wplywy twoich przyjaciol";
    cout<<"podawaj wartosci wplywow sasiadow wieksze od 0:";
    float temp;
    cin>>temp;
    int i=0;
    while(i<arr&&temp>=0)
    {
        wplywy[i]=temp;
        ++i;
        if(i<arr)
        {

            cout<<"podaj kolejna wartosc "<<endl;
            cin>>temp;
        }
    }
    if(i==0)
    {
        cout<<"brak danych koniec\n";

    }
    else{
        cout<<"podaj swoj wskaznik na wplywy: "<<endl;
        float ja;
        cin>>ja;
        int licz=0;
        int j;

        for(j=0;j<=i;j++)
        {

            if(ja<wplywy[j])
                licz++;
        }

        cout<<licz<<" twoich sadsaidow jest bardziej p[odatnych na plywy niz ty"<<endl;



    }
    cout << "Hello world!" << endl;
    return 0;
}

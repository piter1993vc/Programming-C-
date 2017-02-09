#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    const char * napis1 ="Floryda";
    const char * napis2 ="Fiona";
    const char * napis3 ="Cos";
    int len=strlen(napis2);
    cout<<"inkrementacja indeksu petli:\n";
    for(int i=1;i<=len;i++)
    {
        cout.write(napis2,i);
        cout<<endl;

    }

    cout<<"dekrementacja indeksu petli:\n";

    for(int i=len;i>=1;i--)
    {
        cout.write(napis2,i);
        cout<<endl;

    }

    cout<<"przekroczenie dlugosci lancucha\n";
    cout.write(napis1,20);



    cout << "Hello world!" << endl;
    return 0;
}

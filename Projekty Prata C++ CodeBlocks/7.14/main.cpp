#include <iostream>
#include <string>
using namespace std;
const int sizer=5;
void show(const string *tab, int ile);
int main()
{
    string tab[sizer];
    int i;
    for( i=0;i<sizer;i++)
    {
        cout << "podaj wiersz nr " <<i+1<<" : "<< endl;

     getline(cin,tab[i]);

    }
    show(tab,sizer);

          return 0;
}

void show(const string *tab, int ile)
{


    for(int i=0;i<ile;i++)
    {

          cout<<i+1<<" "<<tab[i]<<endl;
    }

}

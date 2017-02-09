#include <iostream>

using namespace std;
const int sizer=10;
int filler(int *tab,int ile);
void show(int *tab,int ile);
void srednia(int *tab,int ile);
int main()
{
    int golf[sizer];
    int ile;
    ile=filler(golf,sizer);
    show(golf,ile);
    srednia(golf,ile);
    cout << "Hello world!" << endl;
    return 0;
}
int filler(int *tab,int ile)
{
    int counter=0;
   for(int i=0;i<ile;i++)
   {
       cout<<"podaj wynik nr "<<i+1<<" : "<<endl;
       if(!(cin>>tab[i]))
          break;
          else
            counter++;






   }
   return counter;

}

void show(int *tab,int ile)
{

    for(int i=0;i<ile;i++)
    {

        cout<<"wynik nr: " <<i+1<<": "<<tab[i]<<endl;
    }
}

void srednia(int *tab,int ile)
{
double srednia=0.0;
int suma=0;
for(int i=0;i<ile;i++)
{

    suma+=tab[i];
}

srednia=suma/ile;
cout<<"srednia wynosi "<<srednia<<endl;
}

#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;
template<class T>
int reduce(T tab[],int ile)
{
return 0;
}
template<> int reduce<long>(long tab[],int ile)
{
   list<long> lista(tab,tab+ile);
   lista.sort();
   lista.unique();
   list<long>::iterator k;
   int liczby=0;
   for(k=lista.begin();k!=lista.end();k++)
    liczby ++;
   return liczby;
}
template<> int reduce<float>(float tab[],int ile)
{
   list<float> lista(tab,tab+ile);
   lista.sort();
   lista.unique();
   list<float>::iterator k;
   int liczby=0;
   for(k=lista.begin();k!=lista.end();k++)
    liczby ++;
   return liczby;
}



int main()
{
    long  tablica1[]{12,14,14,14,14,15,16,177,18,14,19};
    float tablica2[]{12.3,12.3,13.4,15.2,17.8,19.6};
    int po_redukcji1,po_redukcji2;

    po_redukcji1=reduce(tablica1,11);
    po_redukcji2=reduce(tablica2,6);

    cout << "po reduckcji i sortowaniu w tablicy1 pozostanie "<<po_redukcji1<< " elementow" << endl;
    cout << "po reduckcji i sortowaniu w tablicy2 pozostanie "<<po_redukcji2<< " elementow" << endl;
    return 0;
}


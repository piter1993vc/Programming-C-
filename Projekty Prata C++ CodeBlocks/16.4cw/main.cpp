#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;
int reduce(long tab[],int ile);
int main()
{
    long  tablica[]{12,14,14,14,14,15,16,177,18,14,19};
    int po_redukcji;
    po_redukcji=reduce(tablica,11);
    cout << "po reduckcji i sortowaniu w tablicy pozostanie "<<po_redukcji<< " elementow" << endl;
    return 0;
}
int reduce(long tab[],int ile)
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

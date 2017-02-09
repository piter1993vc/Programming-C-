#include <iostream>
#include <valarray>
#include <cstdlib>

using namespace std;
const int SIZE = 12;
typedef std::valarray<int> vint;   // upraszcza deklaracje
void show(const vint & v, int cols);
int main()
{
      vint valint(SIZE);  // mo�na wyobrazi� sobie jako 4 rz�dy po 3 elementy
      int i;
      for(i=0;i<SIZE;i++)
        valint[i]=rand()%10;

       cout << "Oryginalna tablica:\n";
    show(valint, 3);                    // wy�wietla w 3 kolumnach
    vint vcol(valint[slice(1, 4, 3)]);  // wyci�ga drug� kolumn�
    cout << "Druga kolumna:\n";
    show(vcol, 1);                      // wy�wietla w 1 kolumnie
    vint vrow(valint[slice(3, 3, 1)]);  // wyci�ga drugi wiersz
    cout << "Drugi wiersz:\n";
    show(vrow, 3);

   valint[slice(2, 4, 3)] = 10;        // przypisuje 10 do element�w drugiej kolumny
    cout << "Przypisuje 10 do ostatniej kolumny:\n";
    show(valint, 3);
    cout << "Przypisuje do pierwszej kolumny sum� dw�ch kolejnych:\n";
    // + nie jest zdefiniowane dla wycink�w, potrzebna konwersja na valarray<int>
    valint[slice(0, 4, 3)] = vint(valint[slice(1, 4, 3)])
        + vint(valint[slice(2, 4, 3)]);
    show(valint, 3);
    return 0;
}

void show(const vint & v, int cols)
{
    using std::cout;
    using std::endl;

    int lim = v.size();
    for (int i = 0; i < lim; ++i)
    {
        cout.width(3);
        cout << v[i];
        if (i % cols == cols - 1)
            cout << endl;
        else
            cout << ' ';
    }
    if (lim % cols != 0)
        cout << endl;
}

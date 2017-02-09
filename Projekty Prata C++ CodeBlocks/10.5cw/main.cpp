
#include <iostream>
#include <cctype>                // albo ctype.h
#include "header.h"
int main()
{
    using namespace std;
    Stack st;                    // tworzy pusty stos
    char ch;
    Item po;
    cout << "Nacisnij D, aby wprowadzic deklaracje, \n"
        << "P, aby przetworzyc deklaracje, lub K, aby zakonczyć.\n";
    while (cin >> ch && toupper(ch) != 'K')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'D':
            case 'd': cout << "Podaj imie nowej deklaracji: ";
                      cin.getline(po.fullname,30);
                      cout<<"podaj hajs nowej delkaracji: ";
                      cin>>po.payment;
                      if (st.isfull())
                          cout << "Stos pełen!\n";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                          cout << "Stos pusty!\n";
                      else {
                          st.pop(po);
                          cout << "Deklaracja :" <<po.fullname<<"z hajsem: "<<po.payment<< " zdjęta\n";
                      }
                      break;
        }
        cout << "Naciśnij D, aby wprowadzić deklarację, \n"
            << "P, aby przetworzyć deklarację, lub K, aby zakończyć.\n";
    }
    cout << "Fajrant!\n";
    return 0;
}


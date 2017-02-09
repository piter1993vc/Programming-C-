#include <iostream>
#include "header.h"
#include <cctype>
using namespace std;

int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout<<"nacisnij D aby wprowadic deklaracje,\n"
        <<"P aby przetworzyc deklaracje, lub K aby zakonczyc.\n";
    while(cin>>ch&&ch!='k')
    {


    switch(ch)
    {
    case 'd':
    case 'D':
        cout<<"podaj numer nowej deklaracji:";
        cin>>po;
        if(st.isfull())
        {
             cout<<"stos pelen!\n";

        }
            else
            {


            st.push(po);
            cout<<"deklaracja "<<po<<" wprowadzona"<<endl;
            }


        break;
    case 'p':
    case 'P':


        if(st.isempty())
        {
             cout<<"stos pusty!\n";

        }

           else
           {
                       st.pop(po);
        cout<<" deklaracja nr "<<po<<" zdjeta\n";
           }


    break;












    }
      cout<<"nacisnij D aby wprowadic deklaracje,\n"
    <<"P aby przetworzyc deklaracje, lub K aby zakonczyc.\n";


    }
    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;
void showmenu();
void report();
void comfort();
int main()
{

  showmenu();
    int ch;
    cin>>ch;
    while(ch!=5)
    {

        switch(ch)
        {

        case 1: cout<<"\a                         \n";          break;
        case 2: report();                                       break;
        case 3:  cout<<"szef nigdzie nie wychodzil\n";          break;
        case 4: comfort();                                      break;
        default: cout<<"nie ma takiej opcji!      \n";
        }
        showmenu();
        cin>>ch;
    }
cout<<"koniec do widzenia";
    return 0;
}
void showmenu()
{
  cout<<"wybierz 1,2,3,4 lub 5 aby zakonczyc \n"
        "1) alarm                    2)raport\n"
        "3) alibi                    4)luzik \n"
        "5) koniec                           \n";

}
void report()
{
  cout<<"to byl naprawde wspanialy tydzien             \n"
         "sprzedaz wzrosla o 120% wydatki zmalały o 35%\n";

}
void comfort()
{
    cout<<"pracownicy uwazaja cie za fajnego goscia\n";


}

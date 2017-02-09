#include <iostream>

using namespace std;
const int fave=27;
int main()
{
    int liczba;
    cout<<"zabawmy sie w zgadywanie"<<endl;
    cout<<"szukajmy liczby od 1 do 100: "<<endl;
    do
    {
        cin>>liczba;
        if(liczba>fave)
        {

            cout<<"za duzo!"<<endl;

        }
        else if(liczba<fave)
        {
               cout<<"za malo!"<<endl;
        }
        else
            cout<<"udalo sie to 27"<<endl;
    }while(liczba!=fave);
    cout << "koniec" << endl;
    return 0;
}

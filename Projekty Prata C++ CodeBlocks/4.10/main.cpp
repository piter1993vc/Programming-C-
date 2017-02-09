#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char charr[20];
    string str;
    cout<<"dlugosc lancucha charr przed wprowadzeniem danych "<<strlen(charr)<<endl;

     cout<<"dlugosc lancucha str przed wprowadzeniem danych "<<str.size()<<endl;

     cout<<"wprowadzenie wiersza testu\n";
     cin.getline(charr,20);
     cout<<"wprowadzony tekst: "<<charr<<endl;

       cout<<"wprowadzenie kolejnego wiersza testu\n";
     getline(cin,str);
     cout<<"wprowadzony tekst: "<<str<<endl;


      cout<<"dlugosc lancucha charr po wprowadzeniu danych "<<strlen(charr)<<endl;

     cout<<"dlugosc lancucha str po wprowadzeniu danych "<<str.size()<<endl;

    cout << "Hello world!" << endl;
    return 0;
}

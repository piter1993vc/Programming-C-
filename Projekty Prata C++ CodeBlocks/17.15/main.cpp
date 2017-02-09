#include <iostream>

using namespace std;
const int slen=10;
inline void eatline(){while(cin.get()!='\n') continue;}
int main()
{
    char name[slen];
    char title[slen];
    cout<<"podaj swoje imie i nazwisko";
    cin.get(name,slen);
    if(cin.peek()!='\n')
    cout<<"przykro nam miejsca wystarczy tylko na "<<name<<endl;
        eatline();
    cout<<"drogi "<<name<<" podaj swoje stanowisko "<<endl;
    cin.get(title,slen);
    if(cin.peek()!='\n')
        cout<<"bylismy zmuszeni skrocic nazwe twojego stanowiska " <<endl;
    eatline();
    cout<<"imie i nazwisko "<<name<<" stanowisko " <<title<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

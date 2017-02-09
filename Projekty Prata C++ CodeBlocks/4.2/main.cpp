#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int size=15;
    char name1[size];
    char name2[size]="c++wboy";
    cout<<"jak sie masz jestem "<<name2;
    cout<<"\na jak ty sie nazywasz? "<<endl;
    cin>>name1;
    cout<<"no tak "<<name1<<" twoje imie ma ";
    cout<<strlen(name1)<<" liter i jest zapisane "<<endl;
    cout<<" w tablicy majacej "<<sizeof(name1)<<" bajtow.\n";
    cout<<" twoj inicial to " <<name1[0]<<"\n.";
    name2[3]='\0';
    cout<<"pierwsze 3 litery mojego imienia to : "<<name2<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

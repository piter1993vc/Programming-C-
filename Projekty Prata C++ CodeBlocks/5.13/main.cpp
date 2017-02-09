#include <iostream>

using namespace std;
    const int aray_size=20;
int main()
{
char name[aray_size];
cout<<"prosze podaj swoje imie:";
cin>>name;
cout<<"oto twoje imie ustawione pionowo jako kody ascii:\n";
int i=0;
while(name[i]!='\0')
{
    cout<<name[i]<<" "<<int(name[i])<<endl;
    i++;

}
    cout << "Hello world!" << endl;
    return 0;
}

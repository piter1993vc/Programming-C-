#include <iostream>

using namespace std;

int main()
{
char ch='M';
int i=ch;
cout<<"kod ascii znaku: "<<ch<<" to "<<i<<endl;
cout<<"dodajmy do kodu znaku jedynke"<<endl;
ch+=1;
i=ch;
cout<<"kod ascii znaku: "<<ch<<" to "<<i<<endl;
cout<<"wypisanie znaku za pomoca metody cout.put()"<<endl;
cout.put(ch);
cout<<endl<<"gotowe"<<endl;

    return 0;
}

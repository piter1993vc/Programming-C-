#include <iostream>
#include <cstring>

using namespace std;

int main()
{\
char word[20]="?ate";
    for(char ch='a';strcmp(word,"mate");ch++)
    {
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<"petla sie skonczyla prawidlowe slowo to: "<<word<<endl;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout<<"podaj slowo synek: ";
    string slowo;
    getline(cin,slowo);
    int i,j;
    int rozmiar=slowo.size();
    char temp;
    for(i=0,j=rozmiar-1;i<j;++i,--j)
    {
        temp=slowo[i];
        slowo[i]=slowo[j];
        slowo[j]=temp;

    }
    cout << slowo << endl;
    return 0;
}

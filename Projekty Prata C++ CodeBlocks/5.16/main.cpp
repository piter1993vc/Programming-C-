#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"podawaj znaki a program zliczy ile jest znakow niebialych\n";
    cin>>ch;
    int licz=0;
    while(ch!='#')
    {
        cout.put(ch);
        licz++;
        cin>>ch;
    }

    cout << "wprowadzono " <<licz<<" znakow"<< endl;
    return 0;
}

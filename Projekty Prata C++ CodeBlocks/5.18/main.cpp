#include <iostream>

using namespace std;

int main()
{
    char ch;
    int licz=0;
    cin.get(ch);
    while(cin.fail()==false)
    {
       cout.put(char(ch)) ;
       licz++;
       cin.get(ch);

    }
  cout << "wprowadzono " <<licz<<" znakow"<< endl;
    return 0;
}

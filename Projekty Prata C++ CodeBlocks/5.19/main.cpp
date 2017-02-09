#include <iostream>
#include <cstdlib>
#include <cstdio>


using namespace std;

int main()
{
    int ch;
    int licz=0;
    while((ch=cin.get())!=EOF)
    {
        cout.put(char(ch));
       ch=cin.get();
       licz++;


    }
   cout << "wprowadzono " <<licz<<" znakow"<< endl;
    return 0;
}

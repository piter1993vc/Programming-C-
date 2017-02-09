#include <iostream>

using namespace std;

int main()
{
    char ch;
    int total=0;
    int spaces=0;
    cin.get(ch);
    while(ch!='.')
    {

        if(ch==' ')
        {

            spaces++;

        }
        total++;
        cin.get(ch);
    }
    cout << "wczytano " <<spaces<<" spacji w "<<total<<" znakow"<< endl;
    return 0;
}

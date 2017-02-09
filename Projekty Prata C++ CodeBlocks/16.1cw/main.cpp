#include <iostream>
#include <string>

using namespace std;
bool test(const string & s);
int main()
{
    cout << "podaj slowo" << endl;
    string napis;
    cin >>napis;
    if(test(napis))
    {
        cout<<"to palindrom "<<endl;
    }
    else
    cout<<"to nie jest palindrom "<<endl;

    return 0;
}
bool test(const string & s)
{
    int ile=s.size();
    int i,j;
    bool flag=true;
    for(i=0,j=ile;i<ile;i++,j--)
    {
       if(s[i]!=s[j-1])
        flag=false;
    }
    return flag;


}

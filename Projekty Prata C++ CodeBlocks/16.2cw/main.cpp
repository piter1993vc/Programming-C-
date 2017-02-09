#include <iostream>
#include <string>
#include <cctype>

using namespace std;
bool test(const string & s);
   int offset=0;
int main()
{
    cout << "podaj zdanie" << endl;
    string napis;
   getline(cin,napis);
   int k=0;
   int ile=napis.size();
   int i;

   while(napis[k])
   {
       if(isspace(napis[k]))
       {
           offset++;

           for( i=k;i<ile;i++)
           {
               napis[i]=napis[i+1];
           }
       }
       k++;
   }
   napis[ile-offset]='\0';

cout<<napis<<endl;

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
    int ile=s.size()-offset;
    cout<<ile<<endl;
    int i,j;
    bool flag=true;
    for(i=0,j=ile;i<ile;i++,j--)
    {
       if(s[i]!=s[j-1])
        flag=false;
    }
    return flag;


}

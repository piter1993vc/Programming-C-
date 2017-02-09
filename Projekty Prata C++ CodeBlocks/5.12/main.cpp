#include <iostream>
#include <string>

using namespace std;

int main()
{
    string waclaw="?ate";
    char ch;
 for(ch='a';waclaw!="mate";ch++)
 {
   cout<<waclaw;
     cout<<endl;
     waclaw[0]=ch;
     ch++;

 }
 cout<<"prawidlowe slowo to "<<waclaw<<endl;

    return 0;
}

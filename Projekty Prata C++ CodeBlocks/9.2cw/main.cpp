#include <iostream>
#include <string>

using namespace std;

void strcout(string lan);
int main()
{
    string input;

    cout<<"wprowadz wiersz";
    getline(cin,input);
    while(input[0]!='\0')
    {
            strcout(input);
         cout<<"wprowadz nastepny wiersz";
     getline(cin,input);

        }


 return 0;

    }






void strcout(string lan)
{
    int ile=lan.size();
    static int k=0;
  cout<<lan<<endl;

       k+=ile;



    cout<<endl;
    cout<<"total znakow "<<k<<endl;



}

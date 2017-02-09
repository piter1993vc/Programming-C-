#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;
    cout<<"podaj nazwe dla nowego pliku";
    cin>>filename;
    ofstream fout(filename.c_str());
    fout<<"tylko dla twoich oczu!\n";
    cout<<"podaj swoj tajny numer:";
    float secret;
    cin>>secret;
    fout<<" twoj tajny numer to " <<secret;
    fout.close();
    ifstream fin(filename.c_str());
    cout<<" oto zawartosc pliku " <<filename<<endl;
    char ch;
    while(fin.get(ch))
          {
              cout<<ch;

          }
          cout<<" gotowe" <<endl;
          fin.close();

    return 0;
}

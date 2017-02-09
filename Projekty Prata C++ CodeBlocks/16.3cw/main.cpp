#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <iterator>
#include <algorithm>

using namespace std;
void show(const string & s);
int main()
{
    string temp;
    vector<string> napisy;
    ifstream plik;
    plik.open("plik.txt");
    if(plik.is_open()==false)
    {
        cout<<"nie udalo sie otworzyc pliku "<<endl;
        exit(EXIT_FAILURE);
    }
    while(plik.good())
    {

        plik>>temp;
        napisy.push_back(temp);
    }
    int ile=napisy.size();
    cout<<"w pliku znaleziono  "<<ile<<" napisow a oto one : "<<endl;
  for_each(napisy.begin(),napisy.end(),show);
    return 0;
}
void show(const string & s)
{
    cout<<s<<endl;
}

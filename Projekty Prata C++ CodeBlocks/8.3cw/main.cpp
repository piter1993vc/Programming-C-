#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void change(string &napis);
int main()
{
    cout<<"podaj lancuch (q,aby skonczyc): ";
    string napis;
    getline(cin,napis);
    while(napis[0]!='q')
    {
        change(napis);
        cout<<napis<<endl;
         cout<<"nastepny lancuch (q,aby skonczyc): ";
          getline(cin,napis);

    }
    cout << "do widzenia" << endl;
    return 0;
}
void change(string &napis)
{
    cout<<"w funkcji"<<endl;
    int i=0;
    while(napis[i])
    {
        if(isupper(napis[i]))
        {
            cout<<"na male"<<endl;
           napis[i]=tolower(napis[i]);
        }

        else if(islower(napis[i]))
        {
            cout<<"na duze"<<endl;
           napis[i]=toupper(napis[i]);

        }

            i++;
    }

}

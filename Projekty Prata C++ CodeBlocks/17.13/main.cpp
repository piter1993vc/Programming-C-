#include <iostream>

using namespace std;
const int limit=255;
int main()
{
    char input[limit];
    cout<<"wprowadz dane do lancucha :\n";
    cin.getline(input,limit,'$');
    cout<<"oto twoje dane ";
    cout<<input<<" koniec 1 etapu\n";
    char ch;
    cin.get(ch);
    cout<<" nastepny znak wejsciowy to "<<ch<<endl;
    if(ch!='\n')
        cin.ignore(limit,'\n');
    cout<<"wprowadz lancuch wejsciowy do funkcji";
    cin.get(input,limit,'$');
     cout<<"oto twoje dane ";
    cout<<input<<" koniec 2 etapu\n";
    cin.get(ch);
    cout<<"nastepny znak to "<<ch<<endl;

    cout << "Hello world!" << endl;
    return 0;
}

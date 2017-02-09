#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout<<"podaj tekst do analizy , zakoncz go , wpisujac @.\n";
    char ch;
    int digits=0;
    int whitespace=0;
    int chars=0;
    int punct=0;
    int others=0;
    cin.get(ch);
    while(ch!='@')
    {
        if(isalpha(ch))
            chars++;
        else if(isspace(ch))
            whitespace++;
        else if(ispunct(ch))
            digits++;
        else
        others++;
        cin.get(ch);

    }


    cout << "chars :" << chars<<endl;
    cout << "digits :" << digits<<endl;
    cout << "punct :" << punct<<endl;
    cout << "others :" << others<<endl;
    return 0;
}

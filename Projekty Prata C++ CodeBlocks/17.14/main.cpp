#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
    char  ch;
    while(cin.get(ch))
    {
        if(ch!='#')
        cout<<ch;
        else{
            cin.putback(ch);
            break;
        }
    }
    if(!cin.eof())
    {

        cin.get(ch);
        cout<<endl<<ch<<" top nastepny znak wejsciowy"<<endl;

    }
    else
    {
        cout<<" napotkano koniec pliku\n";
        exit(0);
    }
    while(cin.peek()!='#')
    {
        cin.get(ch);
        cout<<ch;
    }
        if(!cin.eof())
           {
            cin.get(ch);
              cout<<endl<<ch<<" to nastepny znak";
        }


    else
        cout<<"napotkano koniec pliku"<<endl;

    cout << "Hello world!" << endl;
    return 0;
}

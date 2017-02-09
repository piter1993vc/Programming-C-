#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    cin>>ch;
    while(ch!='@')
    {
        if(!isdigit(ch))
        {
            if(islower(ch))
                        {
                        ch=toupper(ch);
                        }
            else
                        {
                        ch=tolower(ch);
                        }

            cout<<ch;
        }


         cin>>ch;

    }

    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"pisz a ja bede powtarzac: ";
    cin.get(ch);
    while(ch!='.')
    {
        if(ch=='\n')
            cout<<ch;
        else
            cout<<++ch;
        cin.get(ch);

    }
    cout << "narka" << endl;
    return 0;
}

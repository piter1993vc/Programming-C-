#include <iostream>

using namespace std;

int main()

{


    cout <<" wprowadzaj znaki az do $" << endl;
    char ch;
    cin.get(ch);
    while(ch!='$')
    {
               cout<<ch;
    cin.get(ch);

    }
    cin.putback(ch);
    cout<<"przerwa"<<endl;
    cout<<ch<<endl;

    return 0;
}

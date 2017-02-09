#include <iostream>

using namespace std;
void n_chars(char,int);
int main()
{
    char ch;
    int total;

    cout << "podaj znak" << endl;
    cin>>ch;
    while(ch!='q')
    {
        cout<<"podaj liczbe calkowita: ";
        cin>>total;
        n_chars(ch,total);

        cout<<"podaj kolejny znak ";
        cin>>ch;

    }
    return 0;
}
void n_chars(char ch,int ile)
{
    while(ile-->=0)
    {
    cout<<ch;
    }

}

#include <iostream>

using namespace std;
void piosenka(const char *tytul="spij aniele moj",int razy=1);
int main()
{
    piosenka();
    cout << "Hello world!" << endl;
    return 0;
}
void piosenka(const char *tytul,int razy)
{

    cout<<tytul<<endl;
}

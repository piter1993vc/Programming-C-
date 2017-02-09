#include <iostream>

using namespace std;
const int arsize=10;
void strcout(char *lan);
int main()
{
    char input[10];
    char next;
    cout<<"wprowadz wiersz";
    cin.get(input,arsize);
    while(cin)
    {
        cin.get(next);
        while(next!='\n')
        {
            cin.get(next);

        }
        strcout(input);
         cout<<"wprowadz nastepny wiersz";
    cin.get(input,arsize);




    }




    cout << "Hello world!" << endl;
    return 0;
}
void strcout(char *lan)
{
    static int k=0;
    while(*lan)
    {
        cout<<*lan;
        lan++;
        k++;
    }
    cout<<endl;
    cout<<"total znakow "<<k<<endl;



}

#include <iostream>

using namespace std;

int main()
{
    char lines[50];
    cout<<"wpisz zdanie"<<endl;
    cin.getline(lines,50);
    cout<<"cale zdanie to: "<<lines<<endl;
    cout<<"zdanie do kropki to: ";
    int i;

int spaces=0;
    for( i=0;lines[i]!='\0';i++)
    {
        cout<<lines[i];
        if(lines[i]=='.')
        {
            break;

        }

         if(lines[i]!=' ')
         continue;

                 spaces++;




    }
    cout<<"\n";
    cout << spaces<<" spacji"<<endl;
    return 0;
}

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream file;
    file.open("kura.txt");
    if(!file.is_open())
    {
        cout<<"nie udalo sie otworzyc pliku";
        exit(1);
    }
    char ch;
    file>>ch;


    while(file.good())
    {
        cout<<ch;
        file>>ch;


    }
file.close();
    cout << "\nHello world!" << endl;
    return 0;
}

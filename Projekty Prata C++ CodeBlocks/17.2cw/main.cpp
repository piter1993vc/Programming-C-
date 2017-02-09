#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>


using namespace std;

int main(int argc, char *argv[])
{
    if(argc<2)
    {
        cerr<<"nie podano nazwy pliku do otwarcia";
        exit(EXIT_FAILURE);
    }

ofstream fout;
fout.open(argv[1]);
if(!fout.is_open())
{
    cerr<<" nie udalo sie otworzyc pliku "<<argv[1]<<" koniec programu ";
    exit(1);
}
cout<<"podaj dane wejsciowe lub nacisnij eof "<<endl;
int ch;
while((ch=cin.get())&& ch!=EOF)
{
    fout<<static_cast<char>(ch);
}
fout.close();



    cout << "Hello world!" << endl;
    return 0;
}

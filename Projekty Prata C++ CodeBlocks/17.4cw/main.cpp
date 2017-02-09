#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


int main(int argc,char *argv[])
{
    if(argc<4)
    {
        cerr<<"nie udalo sie zaladowac danych z wiersza polecen";
        exit(EXIT_FAILURE);
    }
    ifstream wejscie1;
    ifstream wejscie2;
    ofstream wyjscie;
    wejscie1.open(argv[1],ios_base::in);
    wejscie2.open(argv[2],ios_base::in);
    wyjscie.open(argv[3],ios_base::out);
    if(!wejscie1.is_open())
    {
        cerr<<"nie udalo sie otworzyc pliku "<<argv[1]<<" do odczytu koncze program ";
        exit(EXIT_FAILURE);

    }
        if(!wejscie2.is_open())
    {
        cerr<<"nie udalo sie otworzyc pliku "<<argv[2]<<" do odczytu koncze program ";
        exit(EXIT_FAILURE);

    }
     if(!wyjscie.is_open())
    {
        cerr<<"nie udalo sie otworzyc pliku "<<argv[3]<<" do zapisu koncze program ";
        exit(EXIT_FAILURE);

    }
  string plik1,plik2;
  while(getline(wejscie1,plik1,',')||getline(wejscie2,plik2,','))
  {


wyjscie<<plik1;
wyjscie<<plik2;
    wyjscie<<endl;
    plik1='\0';
    plik2='\0';

  }
  wejscie1.close();
  wejscie2.close();
  wyjscie.close();
    return 0;
}

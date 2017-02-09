#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


using namespace std;

int main(int argc,char *argv[])
{
    if(argc<3)
    {
        cerr<<"nie udalo sie zaladowac danych z wiersza polecen";
        exit(EXIT_FAILURE);
    }
    ifstream wejscie;
    ofstream wyjscie;
    wejscie.open(argv[1],ios_base::in);
    wyjscie.open(argv[2],ios_base::out);
    if(!wejscie.is_open())
    {
        cerr<<"nie udalo sie otworzyc pliku "<<argv[1]<<" do odczytu koncze program ";
        exit(EXIT_FAILURE);

    }
     if(!wyjscie.is_open())
    {
        cerr<<"nie udalo sie otworzyc pliku "<<argv[2]<<" do zapisu koncze program ";
        exit(EXIT_FAILURE);

    }
  char ch;
  while(wejscie.get(ch))
  {
      wyjscie.put(ch);
  }
  wejscie.close();
  wyjscie.close();
    return 0;
}

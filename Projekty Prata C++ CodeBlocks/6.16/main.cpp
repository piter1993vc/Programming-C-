#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>


using namespace std;
const int max_size=60;
int main()
{
    char filename[max_size];
    ifstream inFile;
    cout<<"podaj nazwe pliku do otwarcia :";
    cin.getline(filename,max_size);
    strcat(filename,".txt");
    inFile.open(filename);
    if(!inFile.is_open())
    {

        cout<<"otwarcie pliku "<<filename<<" nie powiodlo sie.\n";
        cout<<"program zostanie zakonczony. \n";
        exit(EXIT_FAILURE);
    }

    double value;
    double sum=0.0;
    int licznik=0;
    inFile>>value;
    while(inFile.good())
    {

        ++licznik;
        sum+=value;
        inFile>>value;
    }
    if(inFile.eof())
    {

        cout<<"koniec pliku!\n";

    }
    else if(inFile.fail())
    {
      cout<<"wczytanie danych przerwane, błąd.\n";

    }
    else
    {
        cout<<"wczytywanie z pliku przerwane, przyczyna nieznana";
    }

    if(licznik==0)
    {
       cout<<"nie przetworzono zadnych danych.\n" ;

    }
    else
    {
      cout<<"wczytanych elementow: "<<licznik<<endl;
    cout<<"suma: "<<sum<<endl;
    cout<<"srednia: "<<sum/licznik<<endl;

    }



    return 0;
}

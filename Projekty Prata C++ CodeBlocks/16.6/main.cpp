#include <iostream>
#include <string>
#include <memory>

int main()
{
    using namespace std;
     shared_ptr<string> films[5] =
    {
        shared_ptr<string> (new string("Sówki, sówki")),
       shared_ptr<string> (new string("Gadaj¹ca kaczka")),
         shared_ptr<string> (new string("Wyœcig kurczaków")),
        shared_ptr<string>(new string("Kozi syn")),
         shared_ptr<string>(new string("Kuku³cze jaja"))
    };
    shared_ptr<string> pwin;
    pwin = films[2]; // films[2] traci "posiadanie"
    cout << "Nominowani w kategorii najlepszego filmu przyrodniczego s¹:\n";
    for (int i = 0; i <5; i++)
        cout << *films[i] << endl;
    cout << "A zwyciêzc¹ jest " << *pwin << "!\n";
    cin.get();
    return 0;
}


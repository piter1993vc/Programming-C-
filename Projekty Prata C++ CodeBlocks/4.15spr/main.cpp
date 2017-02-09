#include <iostream>
#include <string>

using namespace std;
struct ryba{
std::string rodzaj;
int waga;
float dlugosc;


};
int main()
{

    ryba *wsk=new ryba;
    wsk->rodzaj="karp";
    wsk->waga=15;
    wsk->dlugosc=178.3;

    cout << wsk->rodzaj<< endl;
    delete wsk;
    return 0;
}

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
    ryba karpik;
    ryba *rybka=&karpik;
    rybka->rodzaj="karp";
    rybka->waga=15;
    rybka->dlugosc=178.3;

    cout << "Hello world!" << endl;
    return 0;
}

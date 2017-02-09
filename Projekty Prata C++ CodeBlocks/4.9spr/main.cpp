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

    karpik.rodzaj="karp";
    karpik.waga=15;
    karpik.dlugosc=178.3;

    cout << "Hello world!" << endl;
    return 0;
}

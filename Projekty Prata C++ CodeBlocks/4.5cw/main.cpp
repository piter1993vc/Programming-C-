#include <iostream>
#include <string>

using namespace std;
struct batonik{
string marka;
float waga;
int  kalorie;

};
int main()
{
    batonik snack{"Mocha Munch",2.3,350};
    cout << snack.marka<<" "<<snack.waga<<" "<<snack.kalorie<< endl;
    return 0;
}

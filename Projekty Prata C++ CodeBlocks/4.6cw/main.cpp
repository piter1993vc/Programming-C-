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
    batonik snack[3]{
        {"Mocha Munch",2.3,350},
        {"Macho minch",2.4,360},
        {"Miau klau",2.5,370}


        };
        for(int i=0;i<3;i++)
            {
            cout << snack[i].marka<<" "<<snack[i].waga<<" "<<snack[i].kalorie<< endl;
        }


    return 0;
}

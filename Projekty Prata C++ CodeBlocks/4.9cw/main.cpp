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
    batonik *snack=new batonik[3];

    snack[0].marka="wafel";
    snack[0].waga=123.2;
    snack[0].kalorie=13;
    snack[1].marka="kon";
    snack[1].waga=12.2;
    snack[1].kalorie=1;
    snack[2].marka="koza";
    snack[2].waga=13.2;
    snack[2].kalorie=3;







for(int i=0;i<3;i++){

cout << snack[i].marka<<" "<<snack[i].waga<<" "<<snack[i].kalorie<< endl;
}


delete [] snack;

    return 0;
}

#include <iostream>
#include <cstring>
class Plorg{
    private:
char imie[20];
int wspolczynnik;
    public:
         Plorg(){ strcpy(imie,"Plorga"); wspolczynnik=50;}
         void change_wsp(int wsp){ wspolczynnik=wsp; }
         void show()const{std::cout<<"imie: "<<imie<<" wspolczynnik: "<<wspolczynnik<<std::endl;}





};
using namespace std;

int main()
{
    Plorg p1;
    p1.show();
    p1.change_wsp(45);
    p1.show();

    cout << "Hello world!" << endl;
    return 0;
}

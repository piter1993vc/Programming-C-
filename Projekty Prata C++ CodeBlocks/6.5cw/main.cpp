#include <iostream>

using namespace std;

int main()
{
    double hajsy=0;
    int kasiora;
    cout<<"podaj ile masz hajsu a oblicze podatek jaki masz zaplacic ";
    while(cin>>kasiora)
    {
        if(kasiora<1000)
        {
            hajsy=0.0;

        }
        else if(kasiora>=1000&&kasiora<20000)
        {
            hajsy=10000*0.1;

        }
        else if(kasiora>=20000&&kasiora<35000)
        {
            hajsy=20000*0.15+10000*0.1;

        }
        else
        {
             hajsy=35000*0.2+20000*0.15+10000*0.1;

        }
        cout<<"plac "<<hajsy<<" hajsu w denarach"<<endl;
         cout<<"podaj ponownie ile masz hajsu a oblicze podatek jaki masz zaplacic : ";




    }

    cout << "koniec" << endl;
    return 0;
}

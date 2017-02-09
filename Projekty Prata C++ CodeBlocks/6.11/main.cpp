#include <iostream>


using namespace std;
enum{red,orange,yellow,green,blue,violet,indigo};
int main()
{
    cout<<"Podaj kod koloru od 0 do 6: ";
    int kod;
    cin>>kod;

    while(kod>=red&&kod<=indigo)
    {


        switch(kod)
        {
            case red    : cout<<" jej usta byly czerwone                  "<<endl; break;
            case orange : cout<<"   jej wlosy byly pomaranczowe           "<<endl; break;
            case yellow : cout<<"     jej chustka była zolta              "<<endl; break;
            case green  : cout<<"       jej oczy byly sielone             "<<endl; break;
            case blue   : cout<<"    jej sukienka byla niebieska          "<<endl; break;
            case violet : cout<<"    jej buty byly fioletowe              "<<endl; break;
            case indigo : cout<<"    jej kapelusz byl indigo              "<<endl; break;




        }
   cout<<"Podaj kod koloru od 0 do 6: ";

    cin>>kod;
    }
    cout << "koniec!" << endl;
    return 0;
}

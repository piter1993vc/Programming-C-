#include <iostream>
#include <cstring>

using namespace std;
char show_menu();
int main()
{
    char ch;
    ch=show_menu();
    while(ch!='k')
    {
        switch(ch)
        {

            case 'r':  cout<<"rozowy rower         "<<endl; break;
            case 'p':  cout<<"pomaranczowy pociag  "<<endl; break;
            case 'd':  cout<<"dziurawa dama        "<<endl; break;
            case 'g':  cout<<"grozny gryzon        "<<endl; break;




        }
          ch=show_menu();


    }
    cout << "end"<< endl;
    return 0;
}
char show_menu()
{
    char ch;
    cout<<"witam w menu                       \n"
    "r)roslinozerca                 p)pianista\n"
    "d)drzewo                       g)gra     \n"
    "k)koniec                                 \n";
    cout<<"Prosze podac litere r,p,t lub b, aby zakonczyc wcisnij k: ";
    cin>>ch;
    while(!strchr("rpdgk",ch))
    {
            cout<<"Prosze podac litere r,p,t lug b, aby zakonczyc wcisnij k: ";
            cin>>ch;
    }


    return ch;
}

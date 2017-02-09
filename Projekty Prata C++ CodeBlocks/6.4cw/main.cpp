#include <iostream>
#include <cstring>

using namespace std;
struct ZPDW{

char imie[30];
char stanowisko[30];
char pseudo[30];
int prefer;

};
char show_menu();

        void  list_imion(ZPDW lista[],int ile);
        void  list_stanowisk(ZPDW lista[],int ile);
        void  list_pseudo(ZPDW lista[],int ile);
        void  list_prefer(ZPDW lista[],int ile);
int main()
{
    ZPDW structury[4]{

    {"piotr      "," linux embedded    ","  buchaj   ",1},
    {"maciej      "," elektryk    ","  macieju  ",2},
    {"dominik     "," java developer    ","  kuki   ",0},
    {"kamil     "," java junior   ","  jacak   ",2}
    };


        char ch;
    ch=show_menu();
    while(ch!='k')
    {
        switch(ch)
        {

            case 'a': list_imion(structury,4); break;
            case 'b': list_stanowisk(structury,4); break;
            case 'c': list_pseudo(structury,4); break;
            case 'd': list_prefer(structury,4); break;




        }
          ch=show_menu();


    }
    cout << "end"<< endl;






    return 0;
}
char show_menu()
{
    char ch;
    cout<<"witam w menu                                    \n"
    "a)lista wg imion              b)lista wg stanowisk    \n"
    "c)lista wg pseudonimow        d)lista wg preferencji  \n"
    "k)koniec                                              \n";
    cout<<"Prosze podac litere a,b,c lub d, aby zakonczyc wcisnij k: ";
    cin>>ch;
    while(!strchr("abcdk",ch))
    {
            cout<<"Prosze podac litere r,p,t lug b, aby zakonczyc wcisnij k: ";
            cin>>ch;
    }


    return ch;
}
    void  list_imion(ZPDW lista[],int ile)
                {
                for(int i=0;i<ile;i++)
                {
                cout<<lista[i].imie<<endl;

                }

    }



    void  list_stanowisk(ZPDW lista[],int ile)
    {
            for(int i=0;i<ile;i++)
            {
            cout<<lista[i].stanowisko<<endl;

            }

    }


    void  list_pseudo(ZPDW lista[],int ile)
    {

            for(int i=0;i<ile;i++)
            {
            cout<<lista[i].pseudo<<endl;

            }
    }

    void  list_prefer(ZPDW lista[],int ile)
    {
        for(int i=0;i<ile;i++)
        {
        if(lista[i].prefer==0)
        cout<<lista[i].imie<<endl;
        else if(lista[i].prefer==1)
        cout<<lista[i].stanowisko<<endl;
        else
        cout<<lista[i].pseudo<<endl;

        }

    }

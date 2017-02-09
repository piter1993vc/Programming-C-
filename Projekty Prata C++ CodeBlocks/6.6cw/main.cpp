#include <iostream>

using namespace std;

  struct ofiarodawcy{
      char imie[30];
      double hajs;

  };



int main()
{
    cout<<"podaj ile mamy ofiarodawcow: ";
    int ile;
    cin>>ile;
    cin.get();
    int nasi=0;
    int najlepsi=0;
    ofiarodawcy *wsk=new ofiarodawcy[ile];
    for(int i=0;i<ile;i++)
    {
       cout<<"podaj dane dla ofiarodawcy nr "<<i+1<<endl;
       cout<<"podaj imie ofiarodawcy :";
       cin>>(wsk+i)->imie;
       cout<<"podaj hajs ofiarodawcy :";
       cin>>(wsk+i)->hajs;
            if((wsk+i)->hajs>=10000)
                {
                najlepsi++;
                }
                else
                    nasi++;

    }
   cout<<"najlepsi ofiarodawcy: "<<endl;
   bool flag_najlepsi=false;
   for(int j=0;j<ile;j++)
   {
       if((wsk+j)->hajs>=1000)
       {
           cout<<"imie: "<<(wsk+j)->imie<<"--";
           cout<<(wsk+j)->hajs<<" zl"<<endl;
           flag_najlepsi=true;
       }



   }
     if(!flag_najlepsi)
       {
           cout<<"brak najlepszych"<<endl;
       }


     cout<<"nasi ofiarodawcy: "<<endl;
   bool flag_nasi=false;
   for(int j=0;j<ile;j++)
   {
       if((wsk+j)->hajs<1000)
       {
           cout<<"imie: "<<(wsk+j)->imie<<"--";
           cout<<(wsk+j)->hajs<<" zl"<<endl;
           flag_nasi=true;
       }



   }
    if(!flag_nasi)
       {
            cout<<"brak naszych"<<endl;
       }
    cout << "Hello world!" << endl;
    return 0;
}

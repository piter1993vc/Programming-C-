#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

  struct ofiarodawcy{
      char imie[30];
      double hajs;

  };



int main()
{
     int ile=0;
     char temp[30];
  ifstream file;
  file.open("kura.txt");
  if(!file.is_open())
  {

      exit(1);
  }
  file>>ile;
file.getline(temp,30);
    int nasi=0;
    int najlepsi=0;
    ofiarodawcy *wsk=new ofiarodawcy[ile];
    for(int i=0;i<ile;i++)
    {
       //cout<<"podaj dane dla ofiarodawcy nr "<<i+1<<endl;
       //cout<<"podaj imie ofiarodawcy :";
       file.getline((wsk+i)->imie,30);
       //cout<<"podaj hajs ofiarodawcy :";
       file>>((wsk+i)->hajs);
       file.getline(temp,30);
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

#include <iostream>

using namespace std;
int wskazanie(const char *wsk,char ch);
int main()
{
    char lancuszek[30]="kapuscinski";
    const char *lancuszek2="kielonek";

    int ile=wskazanie(lancuszek,'p');
    cout<<"w lancuszu "<<lancuszek<<" wystapil "<<ile<<" razy znak "<<'p'<<endl;

        ile=wskazanie(lancuszek2,'l');
    cout<<"w lancuszu "<<lancuszek2<<" wystapil "<<ile<<" razy znak "<<'l'<<endl;

    return 0;
}
int wskazanie(const char *wsk,char ch)
{
    int total=0;
    while(*wsk)
    {
      if(*wsk==ch)
        total++;
      wsk++;


    }


    return total;
}


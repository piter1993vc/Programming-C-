#include <iostream>

using namespace std;

int main()
{
    double waga[3]={100.0,200.0,300.0};
    short stacks[3]={3,2,1};
    double *pw=waga;
    short *ps=&stacks[0];
    cout<<"pw= "<<pw<<" *pw= "<<*pw<<endl;
    pw=pw+1;
    cout<<"dodaj do wskaznika pw 1"<<endl;
    cout<<"pw= "<<pw<<" *pw= "<<*pw<<endl;

      cout<<"ps= "<<ps<<" *ps= "<<*ps<<endl;

        ps=ps+1;
       cout<<"dodaj do wskaznika ps 1"<<endl;
    cout<<"ps= "<<ps<<" *ps= "<<*ps<<endl;

    cout<<"dostep do dwoch elementow zapis tablicowy\n";
    cout<<"stacks[0]= "<<stacks[0]<<" stacks[1]= "<<stacks[1]<<endl;

      cout<<"dostep do dwoch elementow zapis wskaznikowy\n";
    cout<<"*stacks= "<<*stacks<<" *(stacks+1)= "<<*(stacks+1)<<endl;

    cout<<sizeof(waga)<<" wielkosc tablicy waga"<<endl;
     cout<<sizeof(stacks)<<" wielkosc tablicy stacks"<<endl;





    return 0;
}

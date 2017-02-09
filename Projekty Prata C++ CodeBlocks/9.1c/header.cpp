
#include <iostream>
#include <cstring>
#include "header.h"
using namespace std;

void setgolf(golf & g,const char *name, int hc)
{
    strcpy(g.fullname,name);
    g.handicap=hc;

}
void setgolf(golf & g)
{
    cout<<"podaj imie: ";
    cin>>g.fullname;
    cout<<"podaj handicap: ";
    cin>>g.handicap;

}

void showgolf(const golf &g)
{
    cout<<" imie: ";
    cout<<g.fullname<<endl;
    cout<<" handicap: ";
    cout<<g.handicap<<endl;

}


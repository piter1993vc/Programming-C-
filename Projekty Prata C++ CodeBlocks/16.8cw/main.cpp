#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <string>


using namespace std;

int main()
{
    string gosc;
    list<string> bolek;
    list<string> lolek;
    list<string> wspolnie;
    cout <<"podaj liste gosci bolka,k konczy"<<endl;
    while(getline(cin,gosc)&&gosc!="k")
    {
          bolek.push_back(gosc);
    }
    ostream_iterator<string,char> out(cout," ");
    copy(bolek.begin(),bolek.end(),out);
    cout <<"podaj liste gosci lolka,k konczy"<<endl;
    while(getline(cin,gosc)&&gosc!="k")
    {
          lolek.push_back(gosc);
    }

    copy(lolek.begin(),lolek.end(),out);
    set_union(bolek.begin(),bolek.end(),lolek.begin(),lolek.end(),insert_iterator<list<string>>(wspolnie,wspolnie.begin()));
    wspolnie.unique();
    wspolnie.sort();

    cout<<"wynik koncowy"<<endl;
 copy(wspolnie.begin(),wspolnie.end(),out);
    return 0;
}

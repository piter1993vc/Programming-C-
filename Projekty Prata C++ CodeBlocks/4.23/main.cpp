#include <iostream>

using namespace std;
struct anta{

int year;
};
int main()
{
    anta s01,s02,s03;
    s01.year=1998;
    anta *pa=&s02;
    pa->year=1999;
    anta trio[3];
    trio[0].year=2003;
    cout<<trio->year<<endl;
    const anta *arp[3]={&s01,&s02,&s03};
    cout<<arp[1]->year<<endl;
    const anta **ppa=arp;
    auto ppb=arp;
    cout<<(*ppa)->year<<endl;
    cout<<(*(ppb+1))->year<<endl;
    cout << "Hello world!" << endl;
    return 0;
}

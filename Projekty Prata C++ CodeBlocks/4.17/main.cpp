#include <iostream>

using namespace std;

int main()
{
    int nights=1001;
    int *pt=new int;
    *pt=1001;
    cout<<"wartosc nights ";
    cout<<nights<<" polozenie "<<&nights<<endl;
    cout<<" int: ";
    cout<<" wartosc "<<*pt<<" polozenie "<<pt<<endl;
    double *pd=new double;
    *pd=1000001.0;

    cout<<"double: "<<endl;
    cout<<"wartosc"<<*pd<<" polozenie "<<pd<<endl;
    cout<<" polozenie wskaznika pd "<<&pd<<endl;
    cout<<"wielkosc pt"<<sizeof(pt)<<endl;
    cout<<"wielkosc *pt "<<sizeof(*pt)<<endl;
     cout<<"wielkosc pd "<<sizeof(pd)<<endl;
      cout<<"wielkosc *pd "<<sizeof(*pd)<<endl;
      delete pd;
      delete pt;
    return 0;
}

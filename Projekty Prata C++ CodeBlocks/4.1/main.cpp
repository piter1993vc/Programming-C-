#include <iostream>

using namespace std;

int main()
{
    int yams[3];

    yams[0]=1;
    yams[1]=12;
    yams[2]=13;

    int yamcost[3]={20,30,40};


    cout << "razem ignamow" << endl;
    cout<<yams[0]+yams[1]+yams[2]<<endl;
    cout<<"paczka zawierajaca "<<yams[1]<<" to "<<yamcost[1]<<" groszy zxa bulwe"<<endl;
    int total=yams[0]*yamcost[0]+yams[1]*yamcost[1];
    total+=yams[2]*yamcost[2];
    cout <<" laczny kloszt ignamu to "<<total<<endl;
    cout <<"rozmiar tablicy yams "<<sizeof yams<<endl;
    cout <<"rozmiar jednego elementu "<<sizeof(yams[0])<<endl;
    return 0;
}

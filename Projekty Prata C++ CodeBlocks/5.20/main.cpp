#include <iostream>

using namespace std;
const int cities=5;
const int years=4;
int main()
{
    const char* city[cities]=
    {
        "jelenia gora",
        "warszawa    ",
        "krakow      ",
        "kielce      ",
        "szczecin    "



    };
    int maxtemps[years][cities]={
    {12,13,14,15,15},
    {12,13,14,15,15},
    {12,13,14,15,15},
    {12,13,14,15,15}

    };


    int i,j;
    for(i=0;i<cities;i++)
    {
        cout<<city[i]<<"\t";
        for(j=0;j<years;j++)
        {
            cout<<maxtemps[j][i]<<"\t";


        }
        cout<<endl;


    }


    return 0;
}

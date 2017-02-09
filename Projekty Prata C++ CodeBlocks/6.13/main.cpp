#include <iostream>

using namespace std;
const int max_size=5;
int main()
{
    double fish[max_size];
    cout<<"prosze podac wage swoich ryb:";
    cout<<"maksymalnie mozna podac "<<max_size<<"ryb q konczy wpisywanie: "<<endl;
    int i=0;
    cout<<"ryba 1.: ";
    while(i<max_size&&cin>>fish[i])
    {
        if(++i<max_size)

        cout<<"\nryba "<<i+1<<" .: ";
    }
    double total=0.0;
    for(int j=0;j<i;j++)
    {

        total+=fish[j];
    }
    if(i==0)
    {

        cout<<"nie ma zadnych danych "<<endl;

    }
    else
    {

        cout<<total/i<<" =srednia waga z "<<i<<" polowow \n";
    }

    cout << "gotowe" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int wiersze;
    cout <<"podaj liczbe wierszy do wyswietlenia: ";
    cin>>wiersze;
    int i,j,k;
    for(i=0;i<wiersze;i++)
    {
        for(j=0,k=wiersze-1-i;j<wiersze;j++,k--)
        {
            if(k>0)
            cout<<".";
            else
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}

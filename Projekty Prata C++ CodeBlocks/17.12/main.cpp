#include <iostream>
#include <exception>

using namespace std;

int main()
{
    cin.exceptions(ios_base::failbit);
    cout<<"podaj liczby :";
    int sum=0;
    int liczba;
    try{

        while(cin>>liczba)
        {
            sum+=liczba;
        }
    }
    catch(ios_base::failure & bf)
    {
        cout<<bf.what()<<endl;
        cout<<"o tragedia\n";
    }
       cout<<"ostatnia liczba to "<<liczba<<" a liczba cyfr to: "<<sum<<endl;

    return 0;
}

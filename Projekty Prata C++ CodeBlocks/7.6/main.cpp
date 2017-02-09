#include <iostream>
const int maxsize=8;
int sumarr(int  *arr,int ile);
using namespace std;

int main()
{
    int cookies[maxsize]{1,2,4,3,5,7,8,9};
    cout<<cookies<<" =adres tablicy cookies"<<endl;
    cout<<sizeof(cookies)<<" rozmiar tablicy cookies"<<endl;
    int sum=sumarr(cookies,maxsize);
    cout<<"zjedzono ciasteczek "<<sum<<endl;
    sum=sumarr(cookies,3);
        cout<<"pierwsze 3 osoby zjadly  "<<sum<<endl;

            sum=sumarr(cookies+3,1);
        cout<<"ostatnia osoba zjadla "<<sum<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
int sumarr(int  *arr,int ile)
{
   int total=0;
   cout<<arr<< " = arr,";
   for(int i=0;i<ile;i++)
   {
       total+=arr[i];
   }
   return total;
}

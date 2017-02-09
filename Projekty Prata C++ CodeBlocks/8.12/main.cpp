#include <iostream>

using namespace std;
const int lim=8;
template<typename T>
void swaps(T &a,T &b);

template<typename T>
void swaps(T *a,T *b,int n);

void show(int a[]);



int main()
{
    int i=10;
    int j=20;
    cout<<"i,j: "<<i<<" "<<j<<endl;
    cout<<"uzycie funkcji swaps dla typu int "<<endl;
    swaps(i,j);
    cout<<"i,j: "<<i<<" "<<j<<endl;

    int d1[lim]{0,7,0,4,1,7,7,6};
    int d2[lim]{2,8,0,4,1,4,2,1};
    cout<<"tablice poczatkowo:";
    show(d1);
    show(d2);
    swaps(d1,d2,lim);
    cout<<"tablice po zmianie :";
    show(d1);
    show(d2);






    cout << "Hello world!" << endl;
    return 0;
}
template<typename T>
void swaps(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;


}


template<typename T>
void swaps(T *a,T *b,int n)
{
    T temp;
    for(int i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;




    }

}


void show(int a[])
{
    cout<<a[0]<<a[1]<<"/";
    cout<<a[2]<<a[3]<<"/";
    for(int i=4;i<lim;i++)
    {
        cout<<a[i];
    }
    cout<<endl;

}

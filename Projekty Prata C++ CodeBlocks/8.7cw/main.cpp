#include <iostream>

using namespace std;
template <typename T>
void show(T arr[],int n);

template <typename T>
void show(T *arr[],int n);

template <typename T>
T sum(T arr[],int n);

template <typename T>
T sum(T *arr[],int n);

struct depts{
char name[50];
double amount;



};
int main()
{
    int things[6]={1,2,3,4,5,6};
    depts emr[3]{
    {"kozak",23.12    },
    {"konik",53.1    },
    {"krakers",52.3    }




    };
    cout<<sum(things,6)<<endl;

    double *wsk[3];
    for(int i=0;i<3;i++)
    {
        wsk[i]=&emr[i].amount;


    }
    show(things,6);
    show(wsk,3);
cout<<sum(wsk,3)<<endl;

    cout << "Hello world!" << endl;
    return 0;
}


template <typename T>
void show(T arr[],int n)
{
    cout<<"szablon a: "<<endl;
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<endl;
    }



}


template <typename T>
void show(T *arr[],int n)
{
      cout<<"szablon b: "<<endl;
    for(int i=0;i<n;i++)
    {

        cout<<*arr[i]<<endl;
    }



}
template <typename T>
T sum(T arr[],int n)
{
    T sumka=0.0;
    for(int i=0;i<n;i++)
    {

        sumka+=arr[i];
    }
    return sumka;

}
template <typename T>
T sum(T *arr[],int n)
{

double sum=0.0;
for(int i=0;i<n;i++)
{
    sum+=*arr[i];
}
return sum;
}

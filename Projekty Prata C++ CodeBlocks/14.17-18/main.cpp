#include <iostream>
#include <cstdlib>

using namespace std;
template<class T,int n>
class ArrayTp
{
private:
    T ar[n];
public:
    ArrayTp(){}
    explicit ArrayTp(const T & v);
     T & operator[](int i);
     T operator[](int i)const ;



};
int main()
{


    ArrayTp<int,10> sum;
    ArrayTp<double,10> aves;
    ArrayTp<ArrayTp<int,5>,10>twodee;
    int i,j;
    for(i=0;i<10;i++)
    {
        sum[i]=0;
        for(j=0;j<5;j++)
        {
            twodee[i][j]=(i+1)*(j+1);
            sum[i]+=twodee[i][j];



        }
        aves[i]=(double)sum[i]/5;



    }

     for(i=0;i<10;i++)
    {

        for(j=0;j<5;j++)
        {

           cout.width(10);
           cout<<twodee[i][j]<<" ";



        }
        cout<<" sum= ";
        cout.width(3);
        cout<<sum[3]<<", srednia "<<aves[i]<<endl;




    }








    cout << "Hello world!" << endl;
    return 0;
}
template<class T,int n>
ArrayTp<T,n>::ArrayTp(const T & v)
{
    for(int i=0;i<n;i++)
    {
        ar[i]=v;
    }

}


template<class T,int n>
T & ArrayTp<T,n>::operator[](int i)
{
    if(i<0||i>=n)
    {
        std::cerr<<"brad zakresu tablicy "<<i<<" jest poza zakresem "<<endl;
        std::exit(EXIT_FAILURE);
    }
    else
    return ar[i];
}


template<class T,int n>
T  ArrayTp<T,n>::operator[](int i)const
{
    if(i<0||i>=n)
    {
        std::cerr<<"brad zakresu tablicy "<<i<<" jest poza zakresem "<<endl;
        std::exit(EXIT_FAILURE);
    }
    else
    return ar[i];
}

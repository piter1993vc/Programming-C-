#include <iostream>

using namespace std;
template<typename T>
void swaps(T &a,T &b);
struct job{
char name[40];
double salary;
int floor;

};

template<> void swaps<job>(job &s1,job &s2);
void show(job &str);
int main()
{


    cout.precision(2);
    cout.setf(ios_base::fixed,ios_base::floatfield);
    int i=10;
    int j=20;
    cout<<"i,j: "<<i<<" "<<j<<endl;
    cout<<"uzycie funkcji swaps dla typu int "<<endl;
    swaps(i,j);
    cout<<"i,j: "<<i<<" "<<j<<endl;

  job sue{"susan yafee",7300.60,7};
  job sui{"sara fara",2300.20,7};


  cout<<"przed zmiana structur job: "<<endl;
  show(sue);
  show(sui);
  swaps(sue,sui);
   cout<<"po zmianie structur job: "<<endl;
  show(sue);
  show(sui);





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
template<> void swaps<job>(job &s1,job &s2)
{
    double t1;
    int t2;
    t1=s1.salary;
    s1.salary=s2.salary;
    s2.salary=t1;

    t2=s1.floor;
    s1.floor=s2.floor;
    s2.floor=t2;



}
void show(job &str)
{
    cout<<str.name<<" : "<<str.salary<<" zl na pietrze "<<str.floor<<endl;

}

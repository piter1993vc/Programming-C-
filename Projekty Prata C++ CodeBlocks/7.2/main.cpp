#include <iostream>

using namespace std;
void cheers(int);
double cube(double x);
int main()
{
    cheers(5);
    cout<<"podaj liczbe ";
    double side;
    cin>>side;
    double volume=cube(side);
    cout<<"kostka majaca bok "<<side<<" cm ma pojemnosc ";
    cout<<volume<<" centymetrow szesciennych.\n";
    cheers(cube(2));
    cout << "Hello world!" << endl;
    return 0;
}
void cheers(int n)
{
    for(int i=0;i<n;i++)
    {

        cout<<"czesc"<<endl;
    }

}

double cube(double x)
{
    return x*x*x;

}

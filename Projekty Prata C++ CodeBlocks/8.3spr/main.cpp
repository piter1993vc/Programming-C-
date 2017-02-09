#include <iostream>

using namespace std;
void iquote(int a);
void iquote(double a);
void iquote(const char *a);
int main()
{
    char tab[20]="konik";
    int i=12;
    double z=14.5;
    iquote(tab);
    iquote(i);
    iquote(z);
    cout << "Hello world!" << endl;
    return 0;
}
void iquote(int a)
{
    cout<<a<<endl;

}
void iquote(double a)
{
    cout<<a<<endl;

}
void iquote(const char *a)
{
    cout<<a<<endl;

}

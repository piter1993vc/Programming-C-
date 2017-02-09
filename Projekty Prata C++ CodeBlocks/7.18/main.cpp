#include <iostream>

using namespace std;
double betsy(int);
double pam(int);
void estimate(int lines,double(*wsk)(int));
int main()
{
    cout<<"ile wierszy kodu nalezy napisac ";
    int code;
    cin>>code;
    cout<<"oszacowane betsy: "<<endl;
    estimate(code,betsy);

       cout<<"oszacowane pam: "<<endl;
    estimate(code,pam);

    cout << "Hello world!" << endl;
    return 0;
}
double betsy(int a)
{
    double wart;
    wart=0.05*a;
    return wart;

}

double pam(int a)
{
    double wart;
    wart=0.03*a+0.0004*a*a;
    return wart;

}
void estimate(int lines,double(*wsk)(int))
{
    cout<<lines<<" wierszy wymaga "<<endl;
    cout<<(*wsk)(lines)<<" godzin pracy "<<endl;


}

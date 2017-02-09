#include <iostream>

using namespace std;

int main()
{
    cout<<"cudowny kalkulator bedzie sumowal i liczyl srednia"<<endl;
    cout<<"pieciu liczb \n.";
    cout<<"prosze podac 5 wartosci: ";
    double number;
    double sum=0.0;
    for(int i=1;i<=5;i++)
    {
        cout<<"podaj "<<i<< " liczbe: ";
        cin>>number;
        sum+=number;


    }
    cout<<"doprawdy, piec wspanialych liczb\n";
    cout<<"ich suma wynosi "<<sum<<endl;
    cout <<"a ich srednia jest rowna "<<sum/5<<endl;
    cout<<"cudowny kalkulator zegna sie z toba, narka";
    return 0;
}

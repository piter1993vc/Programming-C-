#include <iostream>
#include <new>
const int buf=523;
const int n=5;
char buffer[buf];


using namespace std;

int main()
{
    double *pd1,*pd2;
    int i;
    cout<<"wywolanie new zwyklego i miejscowego new:\n";
    pd1=new double[n];
    pd2=new (buffer) double[n];
    for(i=0;i<n;i++)
    {

        pd2[i]=pd1[i]=1000+20.0*i;
    }
    cout<<"adres pamieci:\n";
    cout<<"sterta: "<<&pd1<<"pamiec statyczna: "<<(void*)buffer<<endl;
    cout<<"zawartosc pamioeci:\n";
    for(i=0;i<n;i++)
    {

        cout<<pd1[i]<<"pod adresem "<<&pd1[i]<<" ; ";
        cout<<pd2[i]<<"pod adresem "<<&pd2[i]<<endl;
    }
        cout<<" drugie wywolanie zwyklego i miejscowego new:\n";
        double *pd3,*pd4;
        pd3=new double[n];
        pd4=new (buffer) double[n];
          for(i=0;i<n;i++)
    {

        pd3[i]=pd4[i]=1000+20.0*i;
    }
     cout<<"zawartosc pamieci:\n";
    for(i=0;i<n;i++)
    {

        cout<<pd3[i]<<"pod adresem "<<&pd3[i]<<" ; ";
        cout<<pd4[i]<<"pod adresem "<<&pd4[i]<<endl;
    }
           cout<<"\n trzecie wywolanie zwyklego i miejscowego new:\n";
           delete []pd1;

           pd1=new double[n];
           pd2=new (buffer+5*sizeof(double)) double[5];

                   for(i=0;i<n;i++)
    {

        pd1[i]=pd2[i]=1000+20.0*i;
    }

     for(i=0;i<n;i++)
    {

        cout<<pd1[i]<<"pod adresem "<<&pd1[i]<<" ; ";
        cout<<pd2[i]<<"pod adresem "<<&pd2[i]<<endl;
    }




    cout << "Hello world!" << endl;
    return 0;
}

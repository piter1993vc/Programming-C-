#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int LIMIT=5;
void file_it(ostream & os,double fo,const double fe[],int n);
int main()
{
    ofstream fout;
    const char *lan="ep-data.txt";
    fout.open(lan);
    if(!fout.is_open())
    {
        cout<<"nie moge otworzyc pliku :"<<lan<<endl;
        exit(1);
    }
    double objective;
    cout<<"podaj ogniskowa teleskopu : "<<endl;
    cin>>objective;
    double eps[LIMIT];
      cout<<"podaj ogniskowe w mm : "<<endl;
    for(int i=0;i<LIMIT;i++)
    {
        cout<<"okular nr: "<<i+1<<endl;
        cin>>eps[i];
    }
    file_it(cout,objective,eps,LIMIT);
    file_it(fout,objective,eps,LIMIT);

    cout << "gotowe" << endl;
    return 0;
}
void file_it(ostream & os,double fo,const double fe[],int n)
{
    ios_base::fmtflags initial;
    initial=os.setf(ios_base::fixed);
    os.precision(0);
    os<<"ogniskowa obiektywu "<<fo<<" mm"<<endl;
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os<<"f okularu";
    os.width(15);
    os<<"powiekszenie "<<endl;
    for(int i=0;i<n;i++)
    {
        os.width(12);
        os<<fe[i];
        os.width(15);
        os<<int(fo/fe[i]+0.5)<<endl;
    }
    os.setf(initial);
}

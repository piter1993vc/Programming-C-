#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Report
{

private:
    string str;
public:
    Report(const string & s):str(s)
    {
        cout<<"obiekt utworzony"<<endl;
    }
    ~Report(){cout<<"obiekt usuniety"<<endl;}
    void comment()const {cout<<str<<endl;}
};
int main()
{
    {


    auto_ptr<Report> ps(new Report("ze wskaznikiem auto_ptr"));
    ps->comment();
    }
   {

       shared_ptr<Report> ps(new Report("ze wskaznikiem shared_ptr"));
       ps->comment();
   }
   {
       unique_ptr<Report> ps(new Report("Ze wskaznikiem unique_ptr"));
       ps->comment();
   }
    return 0;
}

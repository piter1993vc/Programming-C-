#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>


using namespace std;


const long Size1=39L;
const long Size2=100*Size1;
const long Size3=100*Size2;

bool f3(int x){return x%3==0;}
bool f13(int x){return x%13==0;}
int main()
{
    vector<int> numbers(Size1);
    srand(time(0));
    generate(numbers.begin(),numbers.end(),rand);
    cout<<"rozmiar probki ="<<Size1<<'\n';
    int count3=count_if(numbers.begin(),numbers.end(),f3);
    cout<<"liczba elementow podzielnych przez 3: "<<count3<<'\n';
        int count13=count_if(numbers.begin(),numbers.end(),f13);
    cout<<"liczba elementow podzielnych przez 13: "<<count13<<'\n';
    numbers.resize(Size2);
     generate(numbers.begin(),numbers.end(),rand);
    cout<<"rozmiar probki ="<<Size2<<'\n';
    class f_mod
    {
    private:
        int dv;
    public:
        f_mod(int d=1):dv(d){}
        bool operator()(int x){return x%dv==0;}
    };
         count3=count_if(numbers.begin(),numbers.end(),f_mod(3));
       cout<<"liczba elementow podzielnych przez 3: "<<count3<<'\n';
         count13=count_if(numbers.begin(),numbers.end(),f_mod(13));
    cout<<"liczba elementow podzielnych przez 13: "<<count13<<'\n';

  numbers.resize(Size3);
     generate(numbers.begin(),numbers.end(),rand);
    cout<<"rozmiar probki ="<<Size3<<'\n';

         count3=count_if(numbers.begin(),numbers.end(),[](int x){return x%3==0;});
       cout<<"liczba elementow podzielnych przez 3: "<<count3<<'\n';
         count13=count_if(numbers.begin(),numbers.end(),[](int x){return x%13==0;});
    cout<<"liczba elementow podzielnych przez 13: "<<count13<<'\n';

    return 0;
}

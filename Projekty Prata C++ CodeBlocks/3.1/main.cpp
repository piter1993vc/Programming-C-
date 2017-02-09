#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n_int={INT_MAX};
    short n_short{SHRT_MAX};
    long n_long(LONG_MAX);
    long long n_llong(LLONG_MAX);

        cout << "int max: " <<n_int<< endl;

        cout << "short max: " <<n_short<< endl;

        cout << "long max: " <<n_long<< endl;

        cout << "long long max: " <<n_llong<< endl;

      cout << "int ma: " <<sizeof(int)<<"bajtow"<< endl;
      cout << "short ma: " <<sizeof(short)<<"bajtow"<< endl;
      cout << "long ma: " <<sizeof(long)<<"bajtow"<< endl;
      cout << "long long ma: " <<sizeof(long long)<<"bajtow"<< endl;


    return 0;


}

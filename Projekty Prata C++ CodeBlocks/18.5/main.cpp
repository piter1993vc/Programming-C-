#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>


using namespace std;


const long Size=3900000L;


int main()
{
    vector<int> numbers(Size);
    srand(time(0));
    generate(numbers.begin(),numbers.end(),rand);
    cout<<"rozmiar probki ="<<Size<<'\n';

    int count3=count_if(numbers.begin(),numbers.end(),[](int x){return x%3==0;});

    cout<<"liczba elementow podzielnych przez 3: "<<count3<<'\n';

        int count13=0;
       for_each(numbers.begin(),numbers.end(),[&count13](int x){count13+=x%13==0;});
    cout<<"liczba elementow podzielnych przez 13: "<<count13<<'\n';

count3=count13=0;
         for_each(numbers.begin(),numbers.end(),[&](int x){count3+=x%3==0; count13+=x%13==0;});
       cout<<"liczba elementow podzielnych przez 3: "<<count3<<'\n';

    cout<<"liczba elementow podzielnych przez 13: "<<count13<<'\n';


    return 0;
}

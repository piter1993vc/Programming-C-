#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int casts[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int> wektor(10);
    copy(casts,casts+10,wektor.begin());
    ostream_iterator<int,char> out(cout," ");
    copy(wektor.begin(),wektor.end(),out);
    cout<<endl;
   cout<<"niejawne uzycie iteratora odwrotnego "<<endl;

   copy(wektor.rbegin(),wektor.rend(),out);
      cout<<"jawne uzycie iteratora odwrotnego "<<endl;
      vector<int>::reverse_iterator it;
      for(it=wektor.rbegin();it!=wektor.rend();it++)
        cout<<*it<<endl;
    return 0;
}

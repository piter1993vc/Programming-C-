#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <ctime>

using namespace std;
vector<int>  Lotto(int numer,int ile);
int main()
{
  std::srand ( unsigned ( std::time(0) ) );
    vector<int> winners;
    winners=Lotto(49,6);
    ostream_iterator<int,char> out(cout," ");
    copy(winners.begin(),winners.end(),out);

    return 0;
}
vector<int>  Lotto(int numer,int ile)
{

   vector<int> numerki;
   vector<int> zwrot;


   for(int i=0;i<numer-1;i++)
   {
       numerki.push_back(i+1);
   }


   random_shuffle(numerki.begin(),numerki.end());

for(int i=0;i<ile;i++)
{

    zwrot.push_back(numerki[i]);
}
    return zwrot;

}

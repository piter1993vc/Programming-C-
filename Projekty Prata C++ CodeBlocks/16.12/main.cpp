#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>


using namespace std;
void outint(int n){cout<<n<<" ";}
int main()
{
    list<int> one(5,2);
    int stuff[5]={1,2,3,4,5};
    list<int> two;
    two.insert(two.begin(),stuff,stuff+5);
    int more[6]={6,7,8,9,0,1};
    list<int> three(two);
    three.insert(three.end(),more,more+6);
    cout<<"lista one "<<endl;
    for_each(one.begin(),one.end(),outint);
     cout<<"lista two "<<endl;
    for_each(two.begin(),two.end(),outint);
     cout<<"lista three "<<endl;
    for_each(three.begin(),three.end(),outint);

three.remove(2);
     cout<<"lista three bez dwojek "<<endl;
    for_each(three.begin(),three.end(),outint);



       cout<<"lista three po uzyciu spclice  "<<endl;
       three.splice(three.begin(),one);
    for_each(three.begin(),three.end(),outint);

   cout<<"lista one "<<endl;
    for_each(one.begin(),one.end(),outint);
    three.unique();

  cout<<"lista three po uzyciu unique "<<endl;
    for_each(three.begin(),three.end(),outint);

    three.sort();
    three.unique();
     cout<<"lista three po uzyciu sort oraz unique "<<endl;
    for_each(three.begin(),three.end(),outint);
    two.sort();
    three.merge(two);
         cout<<"posortowana lista two po wklejeniu w liste three "<<endl;
    for_each(three.begin(),three.end(),outint);


    return 0;
}

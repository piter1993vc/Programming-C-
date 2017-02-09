#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <cstdlib>
#include <algorithm>
#include <iterator>



using namespace std;

int main()
{
    vector<int> vi0;
    for(int i=0;i<1000000;i++)
    vi0.push_back(rand()%100+1);
    vector<int> vi;
    list<int> li;
  copy(vi0.begin(),vi0.end(),insert_iterator<vector<int>>(vi,vi.begin()));
  copy(vi0.begin(),vi0.end(),insert_iterator<list<int>>(li,li.begin()));
  clock_t start1=clock();
  sort(vi.begin(),vi.end());
  clock_t end1=clock();
  cout<<"czas sortowania obiektu vi przy pomocy sort() STL to: "<<(double)(end1-start1)/CLOCKS_PER_SEC<<" sekund"<<endl;
    clock_t start2=clock();
    li.sort();
  clock_t end2=clock();
  cout<<"czas sortowania obiektu li przy pomocy metody sort() to: "<<(double)(end2-start2)/CLOCKS_PER_SEC<<" sekund"<<endl;

 copy(vi0.begin(),vi0.end(),insert_iterator<list<int>>(li,li.begin()));

   clock_t start3=clock();
    copy(li.begin(),li.end(),insert_iterator<vector<int>>(vi,vi.begin()));
    sort(vi.begin(),vi.end());
  copy(vi.begin(),vi.end(),insert_iterator<list<int>>(li,li.begin()));


  clock_t end3=clock();
  cout<<"czas kopiowania li do vi sortowania vi i zwracania wyniku do li to: "<<(double)(end3-start3)/CLOCKS_PER_SEC<<" sekund"<<endl;




    cout << "Hello world!" << endl;
    return 0;
}

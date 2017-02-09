#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <string>



using namespace std;
void output(const string &s){cout<<s<<" "<<endl;}
int main()
{
  string s1[4]={"kara","karma","kura","rura"};
  string s2[2]={"pusty","pies"};
  string s3[2]={"maska","muzyk"};
  vector<string> wect(4);
  copy(s1,s1+4,wect.begin());
  for_each(wect.begin(),wect.end(),output);
  for(auto x :wect)
    cout<<x<<endl;
  copy(s2,s2+2,back_insert_iterator<vector<string>>(wect));
    for_each(wect.begin(),wect.end(),output);
  copy(s3,s3+2,insert_iterator<vector<string>>(wect,wect.begin()));
      for_each(wect.begin(),wect.end(),output);
    return 0;
}

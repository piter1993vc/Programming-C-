#include <iostream>
#include <iterator>
#include <set>
#include <algorithm>
#include <string>


using namespace std;

int main()
{
    const int n=6;
    string s1[n]={"bufon","studenci","dla","trudny","potrafi","dla"};
    string s2[n]={"buuttn","stud090enci","dl90a","trud90ny","elegancki","dl90a"};

   set<string> A(s1,s1+n);
   set<string> B(s2,s2+n);

   ostream_iterator<string,char> out(cout," ");

   cout<<"Zbior A: \n";
   copy(A.begin(),A.end(),out);
   cout<<endl;
    cout<<"Zbior B: \n";
   copy(B.begin(),B.end(),out);

cout<<endl;
   cout<<"suma zbiorow a i b:\n";
   set_union(A.begin(),A.end(),B.begin(),B.end(),out);

cout<<endl;


  cout<<"przeciecie zbiorow a i b:\n";
   set_intersection(A.begin(),A.end(),B.begin(),B.end(),out);

cout<<endl;
  cout<<"roznica zbiorow a i b:\n";
   set_difference(A.begin(),A.end(),B.begin(),B.end(),out);

cout<<endl;
set<string> C;
    cout<<"Zbior C: \n";
    set_union(A.begin(),A.end(),B.begin(),B.end(),insert_iterator<set<string>>(C,C.begin()));

   copy(C.begin(),C.end(),out);

cout<<endl;
   string s3("brudny");
   C.insert(s3);
   cout<<"zbior c po wstawieniu :\n";
      copy(C.begin(),C.end(),out);
      cout<<endl;
      cout<<"wyswietlanie zakresu :\n";
      copy(C.lower_bound("duch"),C.upper_bound("monstrum"),out);




    return 0;
}

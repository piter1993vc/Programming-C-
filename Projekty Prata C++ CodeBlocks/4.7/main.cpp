#include <iostream>
#include <string>

using namespace std;

int main()
{
  char charr1[20];
  char charr2[20]="jaguar";
  string str1;
  string str2="pantera";

  cout<<"podaj gatunek kota :";
  cin>>charr1;

  cout<<"podaj inny gatunek kota: ";
  cin>>str1;

  cout<<charr1<<" "<<charr2<<" "<<str1<<" "<<str2<<endl;
  cout<<"trzecia litera w slowie "<<charr2<<" to "<<charr2[2]<<endl;
   cout<<"trzecia litera w slowie "<<str2<<" to "<<str2[2]<<endl;


}

#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int main()
{
     char charr1[20];
  char charr2[20]="jaguar";
  string str1;
  string str2="pantera";
str1=str2;
strcpy(charr1,charr2);

str1+="makaron";
strcat(charr1,"sok");

int len1=str1.size();
int len2=strlen(charr1);

cout<<"lancuch "<<str1<<" ma "<<len1<< " znakow \n";
cout<<"lancuch "<<charr1<<" ma "<<len2<< " znakow \n";




    return 0;

}

#include <iostream>
#include <string>


using namespace std;
int replacee(string *str,char c1,char c2);
int main()
{
    string konik="bajabongo";
    int val=replacee(&konik,'o','a');
    cout <<val<<" "<<konik<<endl;
    return 0;
}
int replacee(string *str,char c1,char c2)
{
    int counter=0;
    int i=0;
   while((*str)[i])
   {
       if((*str)[i]==c1)
       {
            (*str)[i]=c2;
        counter++;

       }
       i++;


   }
   return counter;

}

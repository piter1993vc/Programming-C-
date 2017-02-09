#include <iostream>

using namespace std;
void func(const char *tab,int a=0);

int main()
{
    func("napis1");
    func("napis2");
    func("napis3",2);

    cout << "Hello world!" << endl;
    return 0;
}
void func(const char *tab,int a)
{
    const char *temp=tab;
static int licz;
   if(a==0)
   {
       while(*tab)
       {
          cout<<(*tab);
          tab++;
       }
       licz++;

   }
   if(a!=0)
   {
       for(int k=0;k<licz;k++)
       {
           while(*tab)
           {
               cout<<*tab;
               tab++;
           }
           tab=temp;
       }
       licz++;

   }
   cout<<endl;
   cout<<licz<<endl;
}

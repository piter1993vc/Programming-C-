#include <iostream>

using namespace std;
struct applicant{
    char imie[30];
};
void f1(applicant *a);


const char *f2(const applicant *a1,const applicant *a2);


int main()
{
    applicant s1{"janusz"};
    applicant s2{"kalisz"};
      void (*p1)(applicant *);
     p1=f1;
     const char *(*p2)(const applicant *,const applicant *);
     p2=f2;
   void (*wsk[5])(applicant *);
   wsk[0]=f1;
   wsk[1]=f1;

   auto wsk2=&wsk;

wsk[1](&s1);
(*(*wsk2))(&s1);

    cout << "Hello world!" << endl;
    return 0;
}
void f1(applicant *a)
{
cout<<a->imie<<endl;

}

const char *f2(const applicant *a1,const applicant *a2)
{
cout<<a1->imie<<endl;
cout<<a2->imie<<endl;
    return 0;
}

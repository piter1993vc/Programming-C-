#include <iostream>

using namespace std;
const int SLEN=30;
struct student{
char fullname[SLEN];
char hobby[SLEN];
int ooplevel;
};
int getinfo(student pa[],int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[],int n);

int main()
{

    cout<<"podaj wiekosc grupy: ";
    int class_size;
    cin>>class_size;
    while(cin.get()!='\n')
        continue;
    student *ptr_stu=new student[class_size];
    int entered =getinfo(ptr_stu,class_size);
    for(int i=0;i<entered;i++)
    {
        cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
        display1(ptr_stu[i]);
        cout<<"---------------------------------------------------------------------------"<<endl;
        display2(&ptr_stu[i]);
        cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    }

    display3(ptr_stu,entered);
    delete[]ptr_stu;
    cout<<"\ngotowe\n";

    return 0;
}
int getinfo(student pa[],int n)
{
    int ile=0;
    for(int i=0;i<n;i++)
    {

      cout<<"podaj imie nr "<<i+1<<":";

      if( !(cin.get(pa->fullname,30)))
      {
          cin.clear();
          break;


      }



      cout<<"podaj hobby nr "<<i+1<<":";
      cin>>pa->hobby;
      cout<<"podaj ooplevel nr "<<i+1<<":";
      cin>>pa->ooplevel;


      ile++;
      pa++;
      cin.get();

    }
    return ile;
}

void display1(student st)
{
    cout<<"imie: "<<endl;
    cout<<st.fullname<<endl;
     cout<<"imie: "<<endl;
    cout<<st.hobby<<endl;
     cout<<"ooplevel: "<<endl;
    cout<<st.ooplevel<<endl;


}

void display2(const student *ps)
{
    cout<<"imie: "<<endl;
    cout<<ps->fullname<<endl;
     cout<<"imie: "<<endl;
    cout<<ps->hobby<<endl;
     cout<<"ooplevel: "<<endl;
    cout<<ps->ooplevel<<endl;

}

void display3(const student pa[],int n)
{
      for(int i=0;i<n;i++)
    {

      cout<<"\nimie nr "<<i+1<<":";
      cout<<pa->fullname;
      cout<<"\nhobby nr "<<i+1<<":";
      cout<<pa->hobby;
      cout<<"\nooplevel nr "<<i+1<<":";
      cout<<pa->ooplevel;

      pa++;
      }


}

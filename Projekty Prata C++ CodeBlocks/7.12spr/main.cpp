#include <iostream>

using namespace std;
struct applicant{
    char imie[30];
    int credit_ratings[3];



};
void show_ptr(applicant *wsk);
void show_copy(applicant wsk);
int main()
{


    applicant s{"bolas",{2,3,4}};
 show_ptr(&s);
  show_copy(s);

    cout << "Hello world!" << endl;
    return 0;
}
void show_ptr(applicant *wsk)
{
    cout<<"imie " <<wsk->imie<<endl;
    cout<<"liczby:"<<endl;
    for(int i=0;i<3;i++)
    {

        cout<<wsk->credit_ratings[i]<<endl;
    }
}
void show_copy(applicant wsk)
{
    cout<<"imie " <<wsk.imie<<endl;
    cout<<"liczby:"<<endl;
    for(int i=0;i<3;i++)
    {

        cout<<wsk.credit_ratings[i]<<endl;
    }

}

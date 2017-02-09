#include <iostream>

using namespace std;
template <typename T>
class HasFriend
{

private:
    T item;
    static int ct;
public:
    HasFriend(const T & i):item(i){ct++;}
    ~HasFriend(){ct--;}
    friend void counts();
    friend void reports(HasFriend<T> &hf);
};

template <typename T>
  int HasFriend<T>::ct;

    void counts()
   {
       cout<<"konkretyzacje int "<<HasFriend<int>::ct<<"; ";
      cout<<"konkretyzacje double "<<HasFriend<double>::ct<<"; \n";
   }

     void reports(HasFriend<int> &hf)
     {
         cout<<"hasfriend<int>: "<<hf.item<<endl;
     }

     void reports(HasFriend<double> &hf)
     {
         cout<<"hasfriend<double>: "<<hf.item<<endl;
     }

int main()
{

    cout<<"brak zadeklarowanych obiektow: \n";
    counts();
    HasFriend<int> hfi1(10);
    cout<<" po deklaracji hfi1: "<<endl;
    counts();
    HasFriend<int> hfi2(20);
    cout<<" po deklaracji hfi2: "<<endl;
    counts();
    HasFriend<double> hff1(5.4);
     cout<<" po deklaracji hff1: "<<endl;
    counts();
    reports(hfi1);
    reports(hfi2);
    reports(hff1);




    return 0;
}

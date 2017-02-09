#include <iostream>

using namespace std;
template <typename T> void counts();
template <typename T> void reports(T &);

template <typename TT>
class HasFriend
{


private :
    TT item;
    static int ct;
public:
    HasFriend(const TT & i): item(i){ct++;}
    ~HasFriend(){ct--;}
    friend void counts<TT>();
    friend void reports<>(HasFriend<TT> &);
};
template <typename TT>
int HasFriend<TT>::ct=0;

template <typename T>
   void counts()
   {
       cout<<"szablon sizeof: "<<sizeof(HasFriend<T>)<<endl;
       cout<<"szablon count "<<HasFriend<T>::ct<<endl;
   }



   template <typename T>
    void reports(T & hf)
    {
        cout<<hf.item<<endl;
    }



int main()
{
    counts<int>();
    HasFriend<int> hfi1(10);
     counts<int>();
      HasFriend<double> hff1(12.33);
     counts<double>();
reports(hfi1);
reports(hff1);


    cout << "Hello world!" << endl;
    return 0;
}

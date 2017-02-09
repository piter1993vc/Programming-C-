#include <iostream>

using namespace std;
template <typename T>
class beta{

private:
    template<typename V>
    class hold;
    hold<T> q;
    hold<int> n;
public:
    beta(T t,int i):q(t),n(i){}
    template<typename U>
    U blab(U u,T t);
    void Show(){q.Show(); n.Show();}









};

template<typename T>
    template<typename V>
        class beta<T>::hold
        {
        private:
            V val;
        public:
            hold(V v=0):val(v){}
            void Show()const;
            V Value(){return val;}

        };

template<typename T>
    template<typename V>
        void beta<T>::hold<V>::Show()const
        {
            std::cout<<val<<std::endl;
        }


template<typename T>
    template<typename U>
     U beta<T>::blab(U u,T t)
     {

        return (n.Value()+q.Value())*u/t;


     }
int main()
{

    beta<double> guy(3.6,5);
    cout<<"T okreslono jako double\n";
    guy.Show();
    cout<<"U najpierw okreslono jako int, a na stepnie jako double\n";
    cout<<guy.blab(10,2.3)<<endl;
    cout<<guy.blab(10,2)<<endl;
    return 0;
}




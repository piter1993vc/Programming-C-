#include <iostream>

using namespace std;
template <class T>
class beta
{
private:
    template <class V>
    class hold
    {
    private:
        V val;
    public:
        hold(V v=0):val(v){}
        void show()const{  cout<<val<<endl;}
        V value()const {return val;}
    };
    hold<T> q;
    hold<int> n;
    public:
        beta(T t,int i):q(t),n(i){}
        template<typename U>
        U blab(U u,T t){return (n.value()+q.value())*u/t;}
        void Show()const {q.show(); n.show();}







};
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

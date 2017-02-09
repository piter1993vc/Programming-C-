#include <iostream>

using namespace std;

template<class T>
class Stack{

private:
    enum{MAX=10};
    T items[MAX];
    int top;
public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const T & item);
    bool pop(T & item);




};
template <template<typename T> class Thing>
class Crab
{
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab(){}
    bool push(int a, double x){return s1.push(a)&&s2.push(x);}
    bool pop(int &a, double &x){return s1.pop(a)&&s2.pop(x);}



};
int main()
{

Crab<Stack> nebula;
int ni;
double nb;
cout<<"podaj pary int double w postaci 4 3.5(0 0 konczy wpisywanie):\n";
while(cin>>ni>>nb&&ni>0&&nb>0)
{
    if(!nebula.push(ni,nb))
        break;
}
while(nebula.pop(ni,nb))
    cout<<ni<<", "<<nb<<endl;
    cout<<"koniec\n";


    cout << "Hello world!" << endl;
    return 0;
}

template<class T>
Stack<T>::Stack()
{
    top=0;
}


template<class T>
bool Stack<T>::isempty()
{
    return top==0;
}


template<class T>
bool Stack<T>::isfull()
{

    return top==MAX;
}

template <class T>
bool Stack<T>::push(const T & item)
{
    if(top<MAX)
    {
        items[top++]=item;
        return true;
    }
    else
        return false;



}


template <class T>
bool Stack<T>::pop(T & item)
{
    if(top>0)
    {
        item=items[--top];
        return true;
    }
    else
    {
       return false;
    }



}



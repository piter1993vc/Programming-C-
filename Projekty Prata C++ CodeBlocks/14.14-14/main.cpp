#include <iostream>
#include <cctype>
#include <string>

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
int main()
{
    Stack<std::string> st;

    char ch;
    std::string po;
    cout<<"wpisz d aby dodac zamowienie.\n"
    <<"p aby przetworzyc zamowienie , i z aby zakonczyc.\n";
    while(cin>>ch&&std::toupper(ch)!='Z')
    {



        while(cin.get()!='\n')
            continue;

        if(!std::isalpha(ch))
        {
            cout<<"\a";
            continue;
        }


        switch(ch)
        {


            case 'D':
            case 'd':
                cout<<"podaj numer zamowienia: ";
                cin>>po;
                if(st.isfull())
                    cout<<"stos pelny\n";
                else
                    st.push(po);
                break;

            case 'P':
            case 'p':


                if(st.isempty())
                    cout<<"nie ma nic do zdjecia\n";
                else
                {
                     st.pop(po);
                    cout<<"numer zamowienia "<<po<<" zdjety"<<endl;
                }


                break;





        }
    cout<<"wpisz d aby dodac zamowienie.\n"
    <<"p aby przetworzyc zamowienie , i z aby zakonczyc.\n";



    }










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


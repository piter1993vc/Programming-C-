#include <iostream>
#include <ctime>
#include <cstdlib>
const int num =10;

using namespace std;
template<class T>
class Stack{

private:
    enum{SIZE=10};
    int stacksize;
    T *items;
    int top;
public:
    explicit Stack(int ss=SIZE);
    Stack(const Stack &st);
    ~Stack(){delete []items;}
    bool isempty(){return top==0;};
    bool isfull(){return top==stacksize;}
    bool push(const T & item);
    bool pop(T & item);
    Stack & operator=(const Stack &st);


    };
int main()
{
    srand(time(nullptr));
    cout<<"podaj rozmiar stosu "<<endl;
    int stacksize;
    cin>>stacksize;

    Stack<const char *> st(stacksize);

   const char* in[num]={
   "arartrrrr",
    "ar12rtyjktrta",
     "aegrra",
      "aergrergera",
       "araergerg",
        "arergera",
         "arergerga",
          "ao;p';lkyhtgrra",
           "arargerg",
            "arrtyuy4r5`a"


   };
    const char* out[num];

   int processed=0;
   int nextin=0;
   while(processed<num)
   {
       if(st.isempty())
        st.push(in[nextin++]);
       else if(st.isfull())
        st.pop(out[processed++]);
       else if(rand()%2&&nextin<num)
       st.push(in[nextin++]);
       else
        st.pop(out[processed++]);






   }
      for(int i=0;i<num;i++)
      {
          cout<<out[i]<<endl;
      }



    return 0;
}
template<typename T>
     Stack<T>::Stack(int ss):stacksize(ss),top(0)
     {

         items=new T[stacksize];
     }

   template<typename T>
    Stack<T>::Stack(const Stack &st)
    {
        stacksize=st.stacksize;
        top=st.top;
        items=new T[stacksize];
        for(int i=0;i<stacksize;i++)
        {
            items[i]=st.items[i];
        }

    }


   template<class T>
    bool Stack<T>::push(const T & item)
    {

        if(top<stacksize)
        {
            items[top++]=item;
            return true;
        }
        else
            return false;
    }
    template<class T>
    bool Stack<T>::pop(T & item)
    {
        if(top>0)
        {
            item=items[--top];
            return true;
        }
        else
            return false;

    }
    template<class T>
    Stack<T> & Stack<T>::operator=(const Stack &st)
    {

        if(this==&st)
        {
            return *this;
        }
        delete []items;
        stacksize=st.stacksize;
        top=st.top;
        items=new T[stacksize];
        for(int i=0;i<top;i++)
        {
            items[i]=st.items[i];
        }
        return *this;

    }

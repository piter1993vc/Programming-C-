#include <iostream>

using namespace std;
typedef int Item;
class Stack{
private:
enum{MAX=10};
Item *items;
int sizer;
int top;



public:


Stack(int n=MAX);
Stack(const Stack & st);
~Stack();


    bool isempty()const;
    bool isfull()const;
    bool push(const Item &item);
    bool pop(Item &item);
    Stack & operator=(const Stack &st);

};
int main()
{

    using namespace std;
    Stack st;
    char ch;
    int po;
    cout<<"nacisnij D aby wprowadic deklaracje,\n"
        <<"P aby przetworzyc deklaracje, lub K aby zakonczyc.\n";
    while(cin>>ch&&ch!='k')
    {


    switch(ch)
    {
    case 'd':
    case 'D':
        cout<<"podaj numer nowej deklaracji:";
        cin>>po;
        if(st.isfull())
        {
             cout<<"stos pelen!\n";

        }
            else
            {


            st.push(po);
            cout<<"deklaracja "<<po<<" wprowadzona"<<endl;
            }


        break;
    case 'p':
    case 'P':


                if(st.isempty())
                {
                cout<<"stos pusty!\n";

                }

                else
                {
                st.pop(po);
                cout<<" deklaracja nr "<<po<<" zdjeta\n";
                }
                break;


                }
      cout<<"nacisnij D aby wprowadic deklaracje,\n"
    <<"P aby przetworzyc deklaracje, lub K aby zakonczyc.\n";


    }
    cout << "Hello world!" << endl;
    return 0;
}

Stack::Stack(int n)
{
    sizer=n;
    top=0;
    items=new int[sizer];

}
Stack::Stack(const Stack & st)
{
    top=st.top;
    sizer=st.sizer;
    items=new int[st.sizer];
    for(int i=0;i<sizer;i++)
    {

        items[i]=st.items[i];
    }




}
Stack::~Stack()
{
    delete []items;

}





    bool Stack::isfull()const
    {
        return top==sizer;

    }
        bool Stack::isempty()const
    {
        return top==0;

    }

    bool Stack::push(const Item &item)
    {





         if(top<sizer)
        {


              items[top++]=item;
              return true;


        }
        else
        {
            std::cout<<"stos pelny\n";
            return false;
        }



    }

    bool Stack::pop(Item &item)
    {
        if(top>0)
        {
          top--;
            item=items[top];



            return true;


        }
        else
        {

            std::cout<<"nie ma co zdejmowac\n";
            return false;
        }

    }
      Stack & Stack::operator=(const Stack &st)
      {
          if(this==&st)
          return *this;
          else

          sizer=st.sizer;
          top=st.top;
          delete[]items;
          items=new int[sizer];
          for(int i=0;i<sizer;i++)
          {
              items[i]=st.items[i];
          }
          return *this;
      }


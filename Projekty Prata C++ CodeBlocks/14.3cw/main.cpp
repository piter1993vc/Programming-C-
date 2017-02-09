#include <iostream>

using namespace std;
class Worker
{

private:
    string fullname;
    long id;


public:
    Worker():fullname("brak"),id(0L){}
    Worker(const string &s,long n):fullname(s),id(n){}
     ~Worker();
     void Set();
    void Show()const;
};
template<class T>
class Quene{
private:
    struct Node{T item; struct Node *next;};
    enum{Q_SIZE=10};
    Node *fronte;
    Node *rear;
    int items;
    const int qsize;
    Quene(const Quene &q) : qsize(0){}
    Quene & operator=(const Quene &q){return *this;}
public:
    Quene(int qs=Q_SIZE);
    ~Quene();
    bool isempty()const;
    bool isfull()const;
    int quenecount()const;
    bool enque( T &item);
    bool dequene(T &item);



};
template<class T>
Quene<T>::Quene(int qs) : qsize(qs)
{
    fronte=rear=nullptr;
    items=0;



}



template<class T>
    Quene<T>::~Quene()
    {
        Node *temp;
        while(fronte!=nullptr)
        {
            temp=fronte;
            fronte=fronte->next;
            delete temp;
        }

    }


template<class T>
    bool Quene<T>::isempty()const
    {
        return items==0;

    }


template<class T>
    bool Quene<T>::isfull()const
    {
        return items==qsize;

    }


template<class T>
    int Quene<T>::quenecount()const
    {

        return items;
    }


template<class T>
    bool Quene<T>::enque( T &item)
    {
        if(isfull())
            return false;
        Node *add=new Node;
        add->item=item;
        add->next=nullptr;
        items++;
        if(fronte==nullptr)
            fronte=add;
        else
            rear->next=add;
        rear=add;

        return true;

    }


template<class T>
    bool Quene<T>::dequene(T &item)
    {
        if (fronte==nullptr)
            return false;
        item=fronte->item;
        items--;
        Node *temp=fronte;
        fronte=fronte->next;
        delete temp;
        if(items==0)
            rear=nullptr;
        return true;

    }













int main()
{
    Quene<Worker*> kolejka(10);
    Worker *wsk;
    Worker *co_wyszlo;
    cout<<"co chcesz zrobic dodac pracownika czy zdjac go z kolejki:\n";
    char x;
    cout<<"aby dodac to w cisnij a aby zdjac to b a co innego konczy:";
    while(cin>>x&&(x=='a'||x=='b'))
          {
                 while(cin.get()!='\n')
                continue;

              if(x=='a')
            {
                  if(!kolejka.isfull())
                  {
                     wsk=new Worker;
                     wsk->Set();
                    kolejka.enque(wsk);
                    cout<<"udalo sie dodac do kolejki pracownika:\n";
                    wsk->Show();

                  }

                else
                    cout<<"kolejka pelna";
            }
              if(x=='b')
              {
                   if(!kolejka.isempty())
                  {

                    kolejka.dequene(co_wyszlo);
                    co_wyszlo->Show();
                  }

                else
                    cout<<"kolejka pusta";



              }




cout<<"\naby dodac to w cisnij a aby zdjac to b a co innego konczy:\n";
          }

    cout << "Hello world!" << endl;
    return 0;
}

 Worker::~Worker(){}

 void Worker::Show()const
 {

 cout<<"imie i nazwisko "<<fullname<<endl;
 cout<<"numer identyfikacyjny "<<id<<endl;




 }
 void Worker::Set()
 {
   cout<<"podaj imie i nazwisko: ";
     getline(cin,fullname);
     cout<<"podaj numer identyfikacyjny: ";
     cin>>id;
    cin.clear();
     while(cin.get()!='\n')
    continue;

 }




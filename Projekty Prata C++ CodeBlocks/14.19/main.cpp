#include <iostream>

using namespace std;
template <class T1,class T2>
class Pair{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first()const {return a;}
    T2 second()const {return b;}
    Pair(const T1 & aval,const T2 & bval):a(aval),b(bval){}
    Pair(){}






};
template <> class Pair<int,int>
{
    private:
    int a;
    int b;
public:
    int & first();
    int & second();
    int first()const {return a;}
    int second()const {return b;}
    Pair(const int & aval,const int & bval):a(aval),b(bval){}
    Pair(){}



};

int main()
{

     Pair<string,int> ratings[4]=
    {
        Pair<string,int>("pod czerwonym baronem",5),
         Pair<string,int>("pod bialym niebem",4),
          Pair<string,int>("pod parasolem",3),
           Pair<string,int>("pod jajami wielblada",2)
    };

    int joints=sizeof(ratings)/sizeof(Pair<string,int>);
    cout<<"ocena:\t restauracja:\n";
    for(int i=0;i<joints;i++)
    {
        cout<<ratings[i].second()<<"\t";
        cout<<ratings[i].first()<<endl;


    }
     cout<<"uwaga zmiana oceny\n";
        ratings[3].first()="u gerdy";
        ratings[3].second()=6;
     cout<<ratings[3].second()<<"\t";
        cout<<ratings[3].first()<<endl;
    cout << "Hello world!" << endl;







    return 0;
}
template <class T1,class T2>
 T1 & Pair<T1,T2>::first()
 {
     return a;
 }

 template <class T1,class T2>
 T2 & Pair<T1,T2>::second()
    {
        return b;
    }



#include <iostream>
#include <valarray>

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

//jawna konkretyzacja szablonu:
template <> class Pair<valarray<int>,valarray<int>>
{
private:

    valarray<int> a;
    valarray<int> b;
public:
    Pair(const int & c, const int & d):a(c),b(d){}
      valarray<int> first()const {return a;}
      valarray<int> second()const {return b;}

     valarray<int> & first()
    {
        return a;
    }
     valarray<int> & second()
    {
        return b;
    }


};




class Wine
{
private:
    std::string label;
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt,ArrayInt> PairArray;
    PairArray roczniki;
    int ile_lat;
public:
    Wine();
    Wine(const char *l, int y,const int yr[],const int bot[]);
    Wine(const char *l,int y);
    ~Wine(){}
    void GetBottles();
    Wine & Label();
    void Show();
    int Sum();
    friend ostream & operator<<( ostream & os,const Wine & winko);


};

int main()
{
cout<<"podaj nazwe wina: ";
char lab[50];
cin.getline(lab,50);
cout<<"podaj liczbe rocznikow "<<endl;
int years;
cin>>years;
Wine holding(lab,years);
holding.GetBottles();
holding.Show();
const int YRS=3;
int y[YRS]={1993,1995,1998};
int b[YRS]={48,60,72};
Wine more("giuseppe",YRS,y,b);
more.Show();
cout<<"laczna liczba butelek wina "<<more.Label()<<" "<<more.Sum()<<endl;
    return 0;
}
    Wine::Wine():label("testowe"),roczniki(10,10)
    {
        ile_lat=10;


    }

    Wine::Wine(const char *l, int y,const int yr[],const int bot[]):label(l),roczniki(y,y),ile_lat(y)
     {

        for(int i=0;i<y;i++)
        {

            roczniki.first()[i]=yr[i];
            roczniki.second()[i]=bot[i];
        }
     }
    Wine::Wine(const char *l,int y):label(l),roczniki(y,y),ile_lat(y)
     {



     }
    void Wine::GetBottles()
     {
        cout<<"podaj roczniki oraz liczbe win dla okreslonego rocznika max "<<ile_lat<<" rocznikow"<<endl;
        for(int i=0;i<ile_lat;i++)
        {
            cout<<"podaj rocznik "<<endl;
            int rocznik;
            cin>>rocznik;
            roczniki.first()[i]=rocznik;
            cout<<"podaj liczbe butelek "<<endl;
            int butle;
            cin>>butle;
            roczniki.second()[i]=butle;
            cout<<"pozostalo "<<ile_lat-i-1<<" rocznikow "<<endl;
        }
     }
    Wine & Wine::Label()
     {
        return *this;
     }
    void Wine::Show()
     {
         cout<<"Wino: "<<label<<endl;
        cout<<"Rocznik:     Butelki:"<<endl;

         for(int i=0;i<ile_lat;i++)
         {
           cout<<roczniki.first()[i]<<"         "<<roczniki.second()[i]<<endl;

         }


     }
    int Wine::Sum()
    {
        int suma=0;

for(int i=0;i<ile_lat;i++)
{
          suma+=roczniki.second()[i];

}



        return suma;


    }
    ostream & operator<<( ostream & os,const Wine & winko)
     {
         os<<winko.label<<endl;
         return os;

     }

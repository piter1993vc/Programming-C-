#include <iostream>
#include <cstring>

using namespace std;




// klasa bazowa korzystaj¹ca z dynamicznego przydzia³u pamiêci

class base
{

private:
       char * label;
        int rating;
public:
        base(const char * l = "brak", int r = 0);
        base(const base & rs);
        virtual ~base();
        base & operator=(const base & rs);
        friend std::ostream & operator<<(std::ostream & os,
                const base& rs);
     virtual void view()const=0;

};
class baseDMA:public base
{
    public:
        baseDMA(const char * l = "brak", int r = 0);
        baseDMA(const base & rs);
        virtual ~baseDMA();
        baseDMA & operator=(const base & rs);
        friend std::ostream & operator<<(std::ostream & os,
                const baseDMA& rs);
                virtual void view()const;


};

// klasa pochodna bez dynamicznego przydzia³u pamiêci
// nie jest potrzebny destruktor
// u¿ywa niejawnego konstruktora kopiuj¹cego
// u¿ywa niejawnego operatora przypisania
class lacksDMA : public base
{
    private:
        enum { COL_LEN = 40 };
        char color[COL_LEN];
    public:
        lacksDMA(const char * c = "brak", const char * l = "brak",
                int r = 0);
        lacksDMA(const char * c, const base & rs);
        friend std::ostream & operator<<(std::ostream & os,
                const lacksDMA & rs);
                  virtual void view()const;
};

// klasa pochodna z dynamicznym przydzia³em pamiêci
class hasDMA : public base
{
    private:
        char * style;
    public:
        hasDMA(const char * s = "brak", const char * l = "brak",
                int r = 0);
        hasDMA(const char * s, const base & rs);
        hasDMA(const hasDMA & hs);
        ~hasDMA();
        hasDMA & operator=(const hasDMA & rs);
        friend std::ostream & operator<<(std::ostream & os,
                const hasDMA & rs);
                  virtual void view()const;
};

int main()
{


    cout << "Hello world!" << endl;
    return 0;
}
base::base(const char * l, int r )
{
    rating=r;
    label=new char[std::strlen(l)+1];
    strcpy(label,l);

}

        base::base(const base & rs)
        {
            rating=rs.rating;
            label=new char[std::strlen(rs.label)+1];
            strcpy(label,rs.label);

        }
        base::~base()
        {

            delete []label;
        }
        base & base::operator=(const base & rs)
        {
            if(this==&rs)
            {
                return *this;
            }
            rating=rs.rating;
            delete []label;
            label=new char[std::strlen(rs.label)+1];
            std::strcpy(label,rs.label);
            return *this;

        }
         ostream & operator<<(ostream & os,const base & rs)
                {
                    os<<"imie "<<rs.label<<endl;
                    os<<"ranking "<<rs.rating<<endl;

                    return os;
                }
                void base::view()const
                {
                   cout<<"imie: "<<label<<endl;
                   cout<<" ranking: "<<rating<<endl;

                }



        lacksDMA::lacksDMA(const char * c , const char * l,int r): base(l,r)
                {
                    {

                        strncpy(color,c,39);
                        color[39]='\0';
                    }


                }
        lacksDMA::lacksDMA(const char * c, const base& rs):base(rs)
        {
            strncpy(color,c,39);
            color[39]='\0';
        }
         std::ostream & operator<<(std::ostream & os,
                const lacksDMA & rs)
                {
                    os<<(const base &)rs;
                    os<<"kolor "<<rs.color<<endl;
                    return os;

                }

                 void lacksDMA::view()const
                {
                  base::view();
                  cout<<"kolor: "<<color<<endl;

                }
    hasDMA::hasDMA(const char * s , const char * l,int r ):base(l,r)
    {
        style=new char[strlen(s)+1];
        strcpy(style,s);

    }
        hasDMA::hasDMA(const char * s, const base & rs):base(rs)
        {
        style=new char[strlen(s)+1];
        strcpy(style,s);
        }
        hasDMA::hasDMA(const hasDMA & hs): base(hs)
        {

            style=new char[strlen(hs.style)+1];
            strcpy(style,hs.style);
        }
       hasDMA::~hasDMA()
       {
           delete []style;
       }
        hasDMA & hasDMA::operator=(const hasDMA & rs)
        {
            if(this==&rs)
                return *this;
            base::operator=(rs);
            delete[]style;
            style=new char[strlen(rs.style)+1];
            strcpy(style,rs.style);
            return *this;

        }
        std::ostream & operator<<(std::ostream & os,
                const hasDMA & rs)
                {
                    os<<(const base &)rs;
                    os<<"styl "<<rs.style<<endl;
                    return os;
                }

                 void hasDMA::view()const
                {
                   base::view();
                   cout<<"styl "<<style<<endl;

                }

  baseDMA::baseDMA(const char * l, int r):base(l,r)
  {

  }
        baseDMA::baseDMA(const base & rs):base(rs)
        {

        }
         baseDMA::~baseDMA()
         {


         }
        baseDMA & baseDMA::operator=(const base & rs)
        {
            if(this==&rs)
                return *this;
            base::operator=(rs);
            return *this;
        }
        ostream & operator<<(std::ostream & os,
                const baseDMA& rs)
                {
                    os<<(base &)rs;
                    return os;
                }
                 void baseDMA::view()const
                {

                    base::view();
                }

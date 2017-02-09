#include <iostream>
#include <cstring>

using namespace std;
// klasa bazowa korzystaj¹ca z dynamicznego przydzia³u pamiêci
class baseDMA
{
    private:
        char * label;
        int rating;

    public:
        baseDMA(const char * l = "brak", int r = 0);
        baseDMA(const baseDMA & rs);
        virtual ~baseDMA();
        baseDMA & operator=(const baseDMA & rs);
        friend std::ostream & operator<<(std::ostream & os,
                const baseDMA & rs);
};

// klasa pochodna bez dynamicznego przydzia³u pamiêci
// nie jest potrzebny destruktor
// u¿ywa niejawnego konstruktora kopiuj¹cego
// u¿ywa niejawnego operatora przypisania
class lacksDMA : public baseDMA
{
    private:
        enum { COL_LEN = 40 };
        char color[COL_LEN];
    public:
        lacksDMA(const char * c = "brak", const char * l = "brak",
                int r = 0);
        lacksDMA(const char * c, const baseDMA & rs);
        friend std::ostream & operator<<(std::ostream & os,
                const lacksDMA & rs);
};

// klasa pochodna z dynamicznym przydzia³em pamiêci
class hasDMA : public baseDMA
{
    private:
        char * style;
    public:
        hasDMA(const char * s = "brak", const char * l = "brak",
                int r = 0);
        hasDMA(const char * s, const baseDMA & rs);
        hasDMA(const hasDMA & hs);
        ~hasDMA();
        hasDMA & operator=(const hasDMA & rs);
        friend std::ostream & operator<<(std::ostream & os,
                const hasDMA & rs);
};

int main()
{

    baseDMA shirt("portabelly",8);
    lacksDMA ballon("czerwony","Blimpo",4);
    hasDMA mapa("merkator","bufallo keys",5);
    cout<<"wypisywanie obiektu baseDMA:\n";
    cout<<shirt<<endl;
    cout<<"wypisywanie obiektu lacksDMA:\n";
    cout<<ballon<<endl;
    cout<<"wypisywanie obiektu hasDMA:\n";
    cout<<mapa<<endl;
    lacksDMA ballon2(ballon);
    cout<<"wypisywanie obiektu lacksDMA:\n";
    cout<<ballon2<<endl;
    hasDMA mapa2;
    mapa2=mapa;
    cout<<"wypisywanie obiektu hasDMA:\n";
    cout<<mapa2<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
baseDMA::baseDMA(const char * l, int r )
{
    rating=r;
    label=new char[std::strlen(l)+1];
    strcpy(label,l);

}

        baseDMA::baseDMA(const baseDMA & rs)
        {
            rating=rs.rating;
            label=new char[std::strlen(rs.label)+1];
            strcpy(label,rs.label);

        }
        baseDMA::~baseDMA()
        {

            delete []label;
        }
        baseDMA & baseDMA::operator=(const baseDMA & rs)
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
         ostream & operator<<(ostream & os,const baseDMA & rs)
                {
                    os<<"imie "<<rs.label<<endl;
                    os<<"ranking "<<rs.rating<<endl;

                    return os;
                }

        lacksDMA::lacksDMA(const char * c , const char * l,int r): baseDMA(l,r)
                {
                    {

                        strncpy(color,c,39);
                        color[39]='\0';
                    }


                }
        lacksDMA::lacksDMA(const char * c, const baseDMA & rs):baseDMA(rs)
        {
            strncpy(color,c,39);
            color[39]='\0';
        }
         std::ostream & operator<<(std::ostream & os,
                const lacksDMA & rs)
                {
                    os<<(const baseDMA &)rs;
                    os<<"kolor "<<rs.color<<endl;
                    return os;

                }
    hasDMA::hasDMA(const char * s , const char * l,int r ):baseDMA(l,r)
    {
        style=new char[strlen(s)+1];
        strcpy(style,s);

    }
        hasDMA::hasDMA(const char * s, const baseDMA & rs):baseDMA(rs)
        {
        style=new char[strlen(s)+1];
        strcpy(style,s);
        }
        hasDMA::hasDMA(const hasDMA & hs): baseDMA(hs)
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
                baseDMA::operator=(rs);
            delete[]style;
            style=new char[strlen(rs.style)+1];
            strcpy(style,rs.style);
            return *this;

        }
        std::ostream & operator<<(std::ostream & os,
                const hasDMA & rs)
                {
                    os<<(const baseDMA &)rs;
                    os<<"styl "<<rs.style<<endl;
                    return os;
                }


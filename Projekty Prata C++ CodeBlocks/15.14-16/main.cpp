#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;


class Sales
{
public:
   enum {MONTHS = 12}; // mo¿e byæ sta³¹ statyczn¹
   class bad_index : public std::logic_error
   {
   private:
      int bi; // z³a wartoœæ indeksu
   public:
      explicit bad_index(int ix,
         const std::string & s = "Niepoprawny indeks w obiekcie klasy Sales\n");
      int bi_val() const {return bi;}
      virtual ~bad_index() throw() {}
   };
   explicit Sales(int yy = 0);
   Sales(int yy, const double * gr, int n);
   virtual ~Sales() {}
   int Year() const { return year; }
   virtual double operator[](int i) const;
   virtual double & operator[](int i);
private:
   double gross[MONTHS];
   int year;
};

class LabeledSales : public Sales
{
    public:
        class nbad_index : public Sales::bad_index
    {
        private:
            std::string lbl;
        public:
            nbad_index(const std::string & lb, int ix,
                    const std::string & s = "Niepoprawny indeks w obiekcie klasy LabeledSales\n");
            const std::string & label_val() const { return lbl;}
            virtual ~nbad_index() throw() {}
    };
        explicit LabeledSales(const std::string & lb = "brak", int yy = 0);
        LabeledSales(const std::string & lb, int yy, const double * gr, int n);
        virtual ~LabeledSales() {}
        const std::string & Label() const { return label; }
        virtual double operator[](int i) const;
        virtual double & operator[](int i);
    private:
        std::string label;
};
  Sales::bad_index::bad_index(int ix, const string & s)
: std::logic_error(s), bi(ix)
{
}

Sales::Sales(int yy)
{
    year = yy;
    for (int i = 0; i < MONTHS; ++i)
        gross[i] = 0;
}

Sales::Sales(int yy, const double * gr, int n)
{
    year = yy;
    int lim = (n < MONTHS) ? n : MONTHS;
    int i;
    for (i = 0; i < lim; ++i)
        gross[i] = gr[i];
    // dla i > n oraz i < MONTHS
    for (; i < MONTHS; ++i)
        gross[i] = 0;
}

double Sales::operator[](int i) const
{
    if(i < 0 || i >= MONTHS)
        throw bad_index(i);
    return gross[i];
}

double & Sales::operator[](int i)
{
    if(i < 0 || i >= MONTHS)
        throw bad_index(i);
    return gross[i];
}

LabeledSales::nbad_index::nbad_index(const string & lb, int ix,
        const string & s) : Sales::bad_index(ix, s)
{
    lbl = lb;
}

    LabeledSales::LabeledSales(const string & lb, int yy)
: Sales(yy)
{
    label = lb;
}

    LabeledSales::LabeledSales(const string & lb, int yy, const double * gr, int n)
: Sales(yy, gr, n)
{
    label = lb;
}

double LabeledSales::operator[](int i) const
{
    if(i < 0 || i >= MONTHS)
        throw nbad_index(Label(), i);
    return Sales::operator[](i);
}
double & LabeledSales::operator[](int i)
{
    if (i < 0 || i >= MONTHS)
        throw nbad_index(Label(), i);
    return Sales::operator[](i);
}





int main()
{


    double vals1[12] =
    {
        1220, 1100, 1122, 2212, 1232, 2334,
        2884, 2393, 3302, 2922, 3002, 3544
    };

    double vals2[12] =
    {
        12, 11, 22, 21, 32, 34,
        28, 29, 33, 29, 32, 25
    };

    Sales sales1(2011, vals1, 12);
    LabeledSales sales2("Blogstar", 2012, vals2, 12);

    cout << "Pierwszy blok try:\n";
    try
    {
        int i;
        cout << "Rok = " << sales1.Year() << endl;
        for (i = 0; i < 12; ++i)
        {
            cout << sales1[i] << ' ';
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "Rok = " << sales2.Year() << endl;
        cout << "Etykieta = " << sales2.Label() << endl;
        for (i = 0; i <= 12; ++i)
        {
            cout << sales2[i] << ' ';
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "Koniec pierwszego bloku try.\n";
    }
    catch(LabeledSales::nbad_index & bad)
    {
        cout << bad.what();
        cout << "Firma: " << bad.label_val() << endl;
        cout << "Niepoprawny indeks: " << bad.bi_val() << endl;
    }
    catch(Sales::bad_index & bad)
    {
        cout << bad.what();
        cout << "Niepoprawny indeks: " << bad.bi_val() << endl;
    }
    cout << "\nKolejny blok try:\n";
    try
    {
        sales2[2] = 37.5;
        sales1[20] = 23345;
        cout << "Koniec drugiego bloku try.\n";
    }
    catch (LabeledSales::nbad_index & bad)
    {
        cout << bad.what();
        cout << "Firma: " << bad.label_val() << endl;
        cout << "Niepoprawny indeks: " << bad.bi_val() << endl;
    }
    catch(Sales::bad_index & bad)
    {
        cout << bad.what();
        cout << "Niepoprawny indeks: " << bad.bi_val() << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

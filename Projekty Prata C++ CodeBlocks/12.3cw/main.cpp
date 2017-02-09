#include <iostream>
#include <cstring>


using namespace std;

class Stock
{
    private:
        char * company;
        int shares;
        double share_val;
        double total_val;
        void set_tot() { total_val = shares * share_val; }
    public:
        Stock();                // konstruktor domyślny
        Stock(const char * co, long n = 0, double pr = 0.0);
        ~Stock();               // "nic nierobiący" destruktor
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show() const;
        const Stock & topval(const Stock & s) const;
        friend ostream & operator<<(ostream & os,const Stock & a);

};

int main()
{
    Stock a("firma",12,14.5);
    cout<<a<<endl;
    cout << "Hello world!" << endl;
    return 0;
}



// konstruktory
Stock::Stock()                   // konstruktor domyślny
{
    int len=strlen("nowy");
    company = new char[len+1];
    strcpy(company,"nowy");
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char * co, long n, double pr)
{
    int len=strlen(co);
    company = new char[len+1];
    strcpy(company,co);

    if (n < 0)
    {
        cout << "Liczba udzialow nie moze być ujemna; "
            << "ustalam liczbe udzialow w " << company << " na 0.\n";
        shares = 0;
    }
    else
    shares = n;
    share_val = pr;
    set_tot();
}

// destruktor klasy
Stock::~Stock()               // wersja "dyskretna"
{
    delete[]company;
}

// pozostałe metody
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Liczba nabywanych udzialow nie moze być ujemna. "
            << "Transakcja przerwana.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{

    if (num < 0)
    {
        cout << "Liczba sprzedawanych udzialow nie moze być ujemna. "
            << "Transakcja przerwana.\n";
    }
    else if (num > shares)
    {
        cout << "Nie możesz sprzedać wiecej udzialow, niz posiadasz! "
            << "Transakcja przerwana.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    // ustawienie formatu na #.###
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Spolka: " << company
        << "  Liczba udzialow: " << shares << '\n';
    // ustawienie formatu na #.##
    cout.precision(2);

    cout << "  Cena udzialu: " << share_val << " zl"
        << "  lączna wartosc udzialow: " << total_val << " zl" << '\n';
    // przywrócenie pierwotnego formatu
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}

   ostream & operator<<(ostream & os,const Stock & a)
  {



    // ustawienie formatu na #.###
    ios_base::fmtflags orig =
        os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);
    os << "Spolka: " << a.company
        << "  Liczba udzialow: " << a.shares << '\n';
    // ustawienie formatu na #.##
    os.precision(2);

    os<< "  Cena udzialu: " << a.share_val << " zl"
        << "  laczna wartosc udzialow: " << a.total_val << " zl" << '\n';
    // przywrócenie pierwotnego formatu
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);






return os;
  }


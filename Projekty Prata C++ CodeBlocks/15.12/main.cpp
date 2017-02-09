#include <iostream>
#include <cmath> // lub math.h; u¿ytkownicy systemu UNIX mog¹ potrzebowaæ opcji -lm
#include <string>


class demo
{
    private:
        std::string word;
    public:
        demo (const char * str)
        {
            word = str;
            std::cout << "Obiekt demo " << word << " utworzony\n";
        }
        ~demo()
        {
            std::cout << "Obiekt demo " << word << " usuniêty\n";
        }
        void show() const
        {
            std::cout << "Obiekt demo " << word << " ¿yje\n";
        }
};

class bad_hmean
{
    private:
        double v1;
        double v2;
    public:
        bad_hmean(double a = 0, double b = 0) : v1(a), v2(b){}
        void mesg();
};

inline void bad_hmean::mesg()
{
    std::cout << "hmean(" << v1 << ", " << v2 << "): "
        << "niepoprawne argumenty: a = -b\n";
}

class bad_gmean
{
    public:
        double v1;
        double v2;
        bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}
        const char * mesg();
};

inline const char * bad_gmean::mesg()
{
    return "Argumenty funkcji gmean() powinny byæ >= 0\n";
}

// prototypy funkcji
double hmean(double a, double b);
double gmean(double a, double b);
double means(double a, double b);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;
    {
        demo d1("z bloku zagnie¿d¿onego w funkcji main()");
        cout << "Podaj dwie liczby: ";
        while (cin >> x >> y)
        {
            try {   // pocz¹tek bloku try
                z = means(x, y);
                cout << "Œrednia œrednich liczb " << x << " i " << y
                    << " wynosi " << z << endl;
                cout << "Podaj kolejn¹ parê liczb: ";
            }
               // koniec bloku try
            catch (bad_hmean & bg) // pocz¹tek bloku catch
            {
                bg.mesg();
                cout << "Spróbuj ponownie.\n";
                continue;
            }
            catch (bad_gmean & hg)
            {
                cout << hg.mesg();
                cout << "U¿yte wartoœci: " << hg.v1 << ", "
                    << hg.v2 << endl;
                cout << "Niestety, to koniec zabawy.\n";
                break;
            } // koniec bloku catch
        }
        d1.show();
    }
    cout << "Koniec\n";
    cin.get();
    cin.get();
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b);
}

double means(double a, double b)
{
    double am, hm, gm;
    demo d2("z funkcji means()");
    am = (a + b) / 2.0; // œrednia arytmetyczna
    try
    {
        hm = hmean(a, b);
        gm = gmean(a, b);
    }
    catch (bad_hmean & bg) // pocz¹tek bloku catch
    {
        bg.mesg();
        std::cout << "Przechwycony w means()\n";
        throw; // ponownie zg³asza wyj¹tek
    }
    d2.show();
    return (am + hm + gm) / 3.0;
}

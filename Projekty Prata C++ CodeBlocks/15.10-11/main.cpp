#include <iostream>
#include <cmath>

using namespace std;
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
double hmean(double a, double b);
double gmean(double a, double b);
int main()
{

      double x, y, z;

    cout << "Podaj dwie liczby: ";
    while (cin >> x >> y)
    {
        try {      // pocz¹tek bloku try
            z = hmean(x, y);
            cout << "Œrednia harmoniczna liczb " << x << " i " << y
                << " wynosi " << z << endl;
            cout << "Œrednia geometryczna liczb " << x << " i " << y
                << " wynosi " << gmean(x, y) << endl;
            cout << "Podaj kolejn¹ parê liczb <w, aby wyjœæ>: ";
        }   // koniec bloku try
        catch (bad_hmean & bg)   // pocz¹tek bloku catch
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



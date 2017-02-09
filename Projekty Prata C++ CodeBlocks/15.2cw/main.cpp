#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;
class bad_hmean:public logic_error
{

    public:
        explicit bad_hmean(const string & s):logic_error(s){}

};




class bad_gmean:public logic_error
{
    public:

        explicit bad_gmean(const string & s):logic_error(s){}

};



double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

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
            bg.what();
            cout << "Spróbuj ponownie.\n";
            continue;
        }
        catch (bad_gmean & hg)
        {
            cout << hg.what();

            cout << "Niestety, to koniec zabawy.\n";
            break;
        } // koniec bloku catch
    }
    cout << "Koniec\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean("a=-b");
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean("a<0 || b<0");
    return std::sqrt(a * b);
}

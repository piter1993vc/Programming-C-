#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;
class pochodna: public logic_error
{

public:
    double v1;
    double v2;
    pochodna(const string & s,double a,double b):logic_error(s),v1(a),v2(b){}
    virtual void show(){}



};
class wyjatek1:public pochodna
{
    private:
    string name;
public:
    wyjatek1(const string & s,double a,double b):pochodna(s,a,b),name(s){}
     void show();


};
class wyjatek2:public pochodna
{
private:
    string name;
public:
     wyjatek2(const string & s,double a,double b):pochodna(s,a,b),name(s){}
     void show();


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
        catch (pochodna & p)   // pocz¹tek bloku catch
        {
         p.show();

            cout << "Spróbuj ponownie.\n";
            continue;
        }

    }
    cout << "Koniec\n";
    return 0;
}
    void wyjatek1::show()
    {
        cout<<"w funkcji "<<name<<endl;
        cout<<"argumenty "<<pochodna::v1<<", "<<pochodna::v2<<endl;
    }

    void wyjatek2::show()
    {   cout<<"w funkcji "<<name<<endl;
        cout<<"argumenty "<<pochodna::v1<<", "<<pochodna::v2<<endl;
    }


double hmean(double a, double b)
{
    if (a == -b);
        throw wyjatek1("hmean",a,b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
       throw wyjatek2("gmean",a,b);
    return std::sqrt(a * b);
}

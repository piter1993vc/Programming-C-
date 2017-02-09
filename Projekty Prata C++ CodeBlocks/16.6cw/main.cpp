// bank.cpp -- test interfejsu klasy Queue
// kompilowa� z plikiem queue.cpp
#include <iostream>
#include <cstdlib>             // funkcje rand() i srand()
#include <ctime>               // funkcja time()
#include <queue>
#include <deque>
using namespace std;
class Customer
{
   public:
        long arrive;     // czas do��czenia klienta do kolejki
        int processtime; // czas obs�ugi klienta
    public:
        Customer() { arrive = processtime = 0; }
        void seter(long when);
        long when() const { return arrive; }
        int ptime() const { return processtime; }
};


const int MIN_PER_HR = 60;
bool newcustomer(double x);    // czy dotar� ju� nast�pny klient?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    // przygotowanie symulacji
    std::srand(std::time(0));  // inicjalizacja generatora liczb losowych

    cout << "Studium przypadku: bankomat Banku Stu Kas\n";
    cout << "Podaj maksymaln� d�ugo�� kolejki: ";
    int qs;
    cin >> qs;
    queue<Customer> line;
      // w kolejce mo�e stan�� do qs klient�w

    cout << "Podaj symulowany czas (w godzinach): ";
    int hours;                 // liczba godzin symulacji
    cin >> hours;
    // symulacja z jednominutow� rozdzielczo�ci�
    long cyclelimit = MIN_PER_HR * hours;       // liczba cykli

    cout << "Podaj �redni� liczb� klient�w na godzin�: ";
    double perhour;            // �rednia liczba nowych klient�w na godzin�
    cin >> perhour;
    double min_per_cust;       // �redni odst�p czasowy pomi�dzy klientami
    min_per_cust = MIN_PER_HR / perhour;

    Customer temp;                 // dane nowego klienta
    long turnaways = 0;        // liczba klient�w odes�anych z kolejki
    long customers = 0;        // liczba klient�w przyj�tych do kolejki
    long served = 0;           // liczba klient�w obs�u�onych w symulacji
    long sum_line = 0;         // ��czna liczba oczekuj�cych
    int wait_time = 0;         // czas do zwolnienia bankomatu
    long line_wait = 0;        // ��czny czas oczekiwania

    // rozpocz�cie symulacji
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))  // mamy nowego ch�tnego
        {
            if (line.size()==(unsigned int)qs)
                turnaways++;
            else
            {
                customers++;
                temp.seter(cycle);        // czas przybycia = nr cyklu
                line.push(temp);     // do��czenie klienta do kolejki
            }
        }
        if (wait_time <= 0 && !line.empty())
        {
            line.pop()  ;      // nast�pny do obs�u�enia
            wait_time = temp.ptime();   // czas obs�ugi = wait_time
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        sum_line += line.size();
        cout<<line.size()<<endl;;
    }

    // zestawienie wynik�w
    if (customers > 0)
    {
        cout << " liczba klient�w przyj�tych: " << customers << endl;
        cout << "liczba klient�w obs�u�onych: " << served << endl;
        cout << " liczba klient�w odes�anych: " << turnaways << endl;
        cout << "    �rednia d�ugo�� kolejki: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.setf(ios_base::showpoint);
            cout << (double) sum_line / cyclelimit << endl;
        cout << "    �redni czas oczekiwania: "
            << (double) line_wait / served << " minut\n";
    }
    else
        cout << "Brak klient�w!\n";

    cout << "Gotowe!\n";

    return 0;
}

// x = �redni odst�p czasowy (w minutach) pomi�dzy potencjalnymi klientami
// je�li warto�� zwracana to true, w danej minucie pojawi� si� klient
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}
void Customer::seter(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}


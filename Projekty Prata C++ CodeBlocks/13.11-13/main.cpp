
#include <iostream>
#include <string>

using namespace std;
// acctabc.h -- klasy do obs³ugi rachunków


// abstrakcyjna klasa bazowa
class AcctABC
{
    private:
        std::string fullName;
        long acctNum;
        double balance;
    protected:
        struct Formatting
        {
            std::ios_base::fmtflags flag;
            std::streamsize pr;
        };
        const std::string & FullName() const { return fullName; }
        long AcctNum() const { return acctNum; }
        Formatting SetFormat() const;
        void Restore(Formatting & f) const;
    public:
        AcctABC(const std::string & s = "brak", long an =-1,
                double bal = 0.0);
        void Deposit(double amt);
        virtual void Withdraw(double amt) = 0; // funkcja czysto wirtualna
        double Balance() const { return balance; }
        virtual void ViewAcct() const = 0; // funkcja czysto wirtualna
        virtual ~AcctABC() {}
};

// klasa do obs³ugi rachunku Brass
class Brass : public AcctABC
{
    public:
        Brass(const std::string & s = "brak", long an = -1,
                double bal = 0.0) : AcctABC(s, an, bal) { }
        virtual void Withdraw(double amt);
        virtual void ViewAcct() const;
        virtual ~Brass() {}
};

// klasa do obs³ugi rachunku BrassPlus
class BrassPlus : public AcctABC
{
    private:
        double maxLoan;
        double rate;
        double owesBank;
    public:
        BrassPlus(const std::string & s = "brak", long an = -1,
                double bal = 0.0, double ml = 500,
                double r = 0.10);
        BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
        virtual void ViewAcct() const;
        virtual void Withdraw(double amt);
        void ResetMax(double m) { maxLoan = m; }
        void ResetRate(double r) { rate = r; }
        void ResetOwes() { owesBank = 0; }
};






const int CLIENTS = 4;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    AcctABC * p_clients[CLIENTS];
    std::string temp;
    long tempnum;
    double tempbal;
    char kind;
    for (int i = 0; i < CLIENTS; i++)
    {
        cout << "Podaj imiê i nazwisko klienta: ";
        getline(cin,temp);
        cout << "Podaj numer rachunku klienta: ";
        cin >> tempnum;
        cout << "Podaj pocz¹tkowy stan konta: $";
        cin >> tempbal;
        cout << "Wpisz 1 dla rachunku Brass lub "
            << "2 dla rachunku BrassPlus: ";
        while (cin >> kind && (kind != '1' && kind != '2'))
            cout <<"Wpisz 1 lub 2: ";
        if (kind == '1')
            p_clients[i] = new Brass(temp, tempnum, tempbal);
        else
        {
            double tmax, trate;
            cout << "Podaj limit debetu: ";
            cin >> tmax;
            cout << "Podaj stopê oprocentowania "
                << "w postaci u³amka dziesiêtnego: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal,
                    tmax, trate);
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (int i = 0; i < CLIENTS; i++)
    {
        p_clients[i]->ViewAcct();
        cout << endl;
    }
    for (int i = 0; i < CLIENTS; i++)
    {
        delete p_clients[i]; // zwolnienie pamiêci
    }
    cout << "Gotowe.\n";
    return 0;
}

AcctABC::AcctABC(const string & s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}
void AcctABC::Deposit(double amt)
{
    if (amt < 0)
        cout << "Nie mo¿esz wp³aciæ ujemnej kwoty; "
            << "Wp³ata anulowana.\n";
    else
        balance += amt;
}
void AcctABC::Withdraw(double amt)
{
    balance -= amt;
}
// metody chronione, zajmuj¹ce siê formatowaniem
AcctABC::Formatting AcctABC::SetFormat() const
{
    // ustawia format w postaci ###.##
    Formatting f;
    f.flag =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}
void AcctABC::Restore(Formatting & f) const
{
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}
void Brass::Withdraw(double amt)
{
    if (amt < 0)
        cout << "Nie mo¿na wyp³aciæ ujemnej kwoty; "
            << "Wyp³ata anulowana.\n";
    else if (amt <= Balance())
        AcctABC::Withdraw(amt);
    else
        cout << "¯¹dana wartoœæ " << amt
            << " z³ przekracza dostêpne œrodki.\n"
            << "Wyp³ata anulowana.\n";
}
void Brass::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "W³aœciciel rachunku Brass: " << FullName() << endl;
    cout << "Numer rachunku: " << AcctNum() << endl;
    cout << "Stan konta: " << Balance() << " z³" << endl;
    Restore(f);
}
// metody klasy BrassPlus
BrassPlus::BrassPlus(const string & s, long an, double bal,
        double ml, double r) : AcctABC(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
: AcctABC(ba) // u¿ywa niejawnego konstruktora kopiuj¹cego
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "W³aœciciel rachunku BrassPlus: " << FullName() << endl;
    cout << "Numer rachunku: " << AcctNum() << endl;
    cout << "Stan konta: " << Balance() << " z³" << endl;
    cout << "Limit debetu: " << maxLoan << " z³" << endl;
    cout << "Kwota zad³u¿enia: " << owesBank << " z³" << endl;
    cout.precision(3);
    cout << "Stopa oprocentowania: " << 100 * rate << "%\n";
    Restore(f);
}

void BrassPlus::Withdraw(double amt)
{
    Formatting f = SetFormat();

    double bal = Balance();
    if (amt <= bal)
        AcctABC::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Zad³u¿enie faktyczne: " << advance << " z³" << endl;
        cout << "Odsetki: " << advance * rate << " z³" << endl;
        Deposit(advance);
        AcctABC::Withdraw(amt);
    }
    else
        cout << "Przekroczony limit debetu. Operacja anulowana.\n";
    Restore(f);
}





#include <iostream>
#include <string>
using namespace std;


template <class Item>
class QueueTP
{
    private:
        enum {Q_SIZE = 10};
        // definicja klasy zagnie�d�onej Node
        class Node
        {
            public:
                Item item;
                Node * next;
                Node(const Item & i) : item(i), next(0) {}
        };
        Node * front; // wska�nik na prz�d kolejki
        Node * rear; // wska�nik na ty� kolejki
        int items; // aktualna liczba element�w w kolejce
        const int qsize; // maksymalna liczba element�w w kolejce
        QueueTP(const QueueTP & q) : qsize(0) {}
        QueueTP & operator=(const QueueTP & q) { return *this; }
    public:
        QueueTP(int us = Q_SIZE);
        ~QueueTP();
        bool isempty() const
        {
            return items == 0;
        }
        bool isfull() const
        {
            return items == qsize;
        }
        int queuecount() const
        {
            return items;
        }
        bool enqueue(const Item & item); // dodaje element na koniec kolejki
        bool dequeue(Item & item); // usuwa element z pocz�tku kolejki
};

// metody klasy QueueTP
    template <class Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs)
{
    front = rear = 0;
    items = 0;
}

    template <class Item>
QueueTP<Item>::~QueueTP()
{
    Node * temp;
    while (front != 0) // dop�ki kolejka nie jest pusta
    {
        temp = front; // zapisuje adres pocz�tku kolejki
        front = front->next; // ustawia wska�nik na nast�pny element
        delete temp; // usuwa dawny pocz�tek
    }
}

// dodaje element do kolejki
    template <class Item>
bool QueueTP<Item>::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node(item); // tworzy element
    // w przypadku b��du new zg�asza wyj�tek std::bad_alloc
    items++;
    if (front == 0) // je�li kolejka jest pusta,
        front = add; // dodaje element na pocz�tek kolejki
    else
        rear->next = add; // w przeciwnym razie dodaje na koniec
    rear = add; // koniec kolejki wskazuje na dodany element
    return true;
}

// umieszcza pocz�tkowy element w obiekcie item i usuwa z kolejki
    template <class Item>
bool QueueTP<Item>::dequeue(Item & item)
{
    if (front == 0)
        return false;
    item = front->item; // ustawia item na pierwszy element kolejki
    items--;
    Node * temp = front; // zapisuje adres pierwszego elementu
    front = front->next; // ustawia pocz�tek na nast�pny element
    delete temp; // usuwa poprzedni pocz�tek
    if (items == 0)
        rear = 0;
    return true;
}


int main()
{
        using std::string;
    using std::cin;
    using std::cout;

    QueueTP<string> cs(5);
    string temp;

    while(!cs.isfull())
    {
        cout << "Wpisz swoje imi� i nazwisko. Zostaniesz obs�u�ona/y "
            "wed�ug kolejno�ci przybycia.\n"
            "Imi� i nazwisko: ";
        getline(cin, temp);
        cs.enqueue(temp);
    }
    cout << "Kolejka jest pe�na. Rozpoczynamy przetwarzanie!\n";

    while (!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "Teraz obs�ugujemy " << temp << "...\n";
    }
    return 0;
    return 0;
}


#ifndef HEADER_H_
#define HEADER_H_

typedef struct Customer
{

   char fullname[30];
   double payment;

} Item;

class Stack
{
    private:
        enum { MAX = 10};    // stała zasięgu klasy
        Item items[MAX];     // przechowuje elementy stosu
        int top;             // indeks szczytowego elementu stosu
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        // push() zwraca false, jeśli stos jest już pełen (true w pozostałych przypadkach)
        bool push(const Item & item);    // odkłada element na stos
        // pop() zwraca false, jeśli stos jest już pusty (true w pozostałych przypadkach)
        bool pop(Item & item);           // zdejmuje element ze stosu
};











#endif // HEADER_H_

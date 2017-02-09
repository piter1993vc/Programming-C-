#include <iostream>
#include <string>
#include <vector>

const int NUM = 5;
int main()
{
    using std::vector;
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;

    vector<int> ratings(NUM);
    vector<string> titles(NUM);
    cout << "Post�puj dok�adnie wed�ug instrukcji. Wpisz\n"
        << NUM << " tytu��w ksi��ek oraz ich oceny na skali 0-10.\n";
    int i;
    for (i = 0; i < NUM; i++)
    {
        cout << "Wpisz tytu� numer " << i + 1 << ": ";
        getline(cin, titles[i]);
        cout << "Wpisz ocen� na skali 0-10: ";
        cin >> ratings[i];
        cin.get();
    }
    cout << "Dzi�kuj�. Wpisa�e� nast�puj�ce dane:\n"
        << "Ocena\tKsi��ka\n";
    for (i = 0; i < NUM; i++)
    {
        cout << ratings[i] << "\t" << titles[i] << endl;
    }

    return 0;
}


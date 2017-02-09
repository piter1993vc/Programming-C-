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
    cout << "Postêpuj dok³adnie wed³ug instrukcji. Wpisz\n"
        << NUM << " tytu³ów ksi¹¿ek oraz ich oceny na skali 0-10.\n";
    int i;
    for (i = 0; i < NUM; i++)
    {
        cout << "Wpisz tytu³ numer " << i + 1 << ": ";
        getline(cin, titles[i]);
        cout << "Wpisz ocenê na skali 0-10: ";
        cin >> ratings[i];
        cin.get();
    }
    cout << "Dziêkujê. Wpisa³eœ nastêpuj¹ce dane:\n"
        << "Ocena\tKsi¹¿ka\n";
    for (i = 0; i < NUM; i++)
    {
        cout << ratings[i] << "\t" << titles[i] << endl;
    }

    return 0;
}


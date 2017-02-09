#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
      string letters;
       cout << "Podaj zestaw liter (koniec, aby zakoñczyæ): ";
    while (cin >> letters && letters != "koniec")

    {
        cout << "Permutacje liter " << letters << endl;
        sort(letters.begin(), letters.end());
        cout << letters << endl;
                while (next_permutation(letters.begin(), letters.end()))
            cout << letters << endl;
        cout << "Podaj kolejny zestaw liter (koniec, aby zakoñczyæ): ";
    }

    return 0;
}

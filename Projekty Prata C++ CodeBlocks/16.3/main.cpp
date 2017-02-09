#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;
const int NUM = 26;
const string wordlist[NUM] = {"agrest", "bigos", "czara",
    "drewno", "ekipa", "figura", "gorycz", "hiena", "iskra",
    "junior", "krata", "lizak", "miska", "nurek", "obuwie",
    "pisak", "rozum", "smalec", "taryfa", "umiar", "video",
    "welon", "yeti", "zalew", "zimno", "zapas"};

int main()
{
      std::srand(std::time(0));
    char play;
    cout << "Czy chcesz zagra� w gr� s�own�? <t/n> ";
    cin >> play;
    play = tolower(play);

       while (play == 't')
    {
        string target = wordlist[std::rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Zgadnij moje sekretne s�owo. Ma ono " << length
            << " liter. Mo�esz zgadywa�\n"
            << "po jednej literze naraz. Mo�esz pomyli� si� " << guesses
            << " razy.\n";
        cout << "Twoje s�owo: " << attempt << endl;

     while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Zgadnij liter�: ";
            cin >> letter;
 if (badchars.find(letter) != string::npos
                    || attempt.find(letter) != string::npos)
            {
                cout << "Ta litera ju� by�a. Spr�buj innej.\n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "Nie ma takiej litery!\n";
                --guesses;
                badchars += letter; // dodaje do ci�gu
            }
            else
            {
                cout << "Poprawna litera!\n";
                attempt[loc] = letter;
                // sprawdza, czy litera nie pojawia si� ponownie w innym miejscu
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
             cout << "Twoje s�owo: " << attempt << endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)

                    cout << "Niepoprawne litery: " << badchars << endl;
                cout << "Mo�esz pomyli� si� jeszcze " << guesses << " razy\n";
            }
        }
        if (guesses > 0)
            cout << "To ju� ca�e s�owo!\n";
        else
            cout << "Niestety, to s�owo to " << target << ".\n";

        cout << "Czy chcesz zagra� jeszcze raz? <t/n> ";
        cin >> play;
        play = tolower(play);
    }

    cout << "Koniec\n";



    return 0;
}

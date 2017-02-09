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
    cout << "Czy chcesz zagraæ w grê s³own¹? <t/n> ";
    cin >> play;
    play = tolower(play);

       while (play == 't')
    {
        string target = wordlist[std::rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Zgadnij moje sekretne s³owo. Ma ono " << length
            << " liter. Mo¿esz zgadywaæ\n"
            << "po jednej literze naraz. Mo¿esz pomyliæ siê " << guesses
            << " razy.\n";
        cout << "Twoje s³owo: " << attempt << endl;

     while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Zgadnij literê: ";
            cin >> letter;
 if (badchars.find(letter) != string::npos
                    || attempt.find(letter) != string::npos)
            {
                cout << "Ta litera ju¿ by³a. Spróbuj innej.\n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "Nie ma takiej litery!\n";
                --guesses;
                badchars += letter; // dodaje do ci¹gu
            }
            else
            {
                cout << "Poprawna litera!\n";
                attempt[loc] = letter;
                // sprawdza, czy litera nie pojawia siê ponownie w innym miejscu
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
             cout << "Twoje s³owo: " << attempt << endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)

                    cout << "Niepoprawne litery: " << badchars << endl;
                cout << "Mo¿esz pomyliæ siê jeszcze " << guesses << " razy\n";
            }
        }
        if (guesses > 0)
            cout << "To ju¿ ca³e s³owo!\n";
        else
            cout << "Niestety, to s³owo to " << target << ".\n";

        cout << "Czy chcesz zagraæ jeszcze raz? <t/n> ";
        cin >> play;
        play = tolower(play);
    }

    cout << "Koniec\n";



    return 0;
}

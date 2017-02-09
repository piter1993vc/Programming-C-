#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Review {
    std::string title;
    int rating;
};
bool FillReview(Review & rr);
void ShowReview(const Review & rr);


int main()
{
     vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);
    int num=books.size();
    if(num>0)
    {
         cout << "Dziêkujê. Wpisa³eœ nastêpuj¹ce dane:\n"
            << "Ocena\tKsi¹¿ka\n";
        for (int i = 0; i < num; i++)
            ShowReview(books[i]);
  cout << " Przypomnienie ocen:\n"
            << "Ocena\tKsi¹¿ka\n";
            vector<Review>::iterator pr;
            for(pr=books.begin();pr!=books.end();pr++)
                ShowReview(*pr);
              vector <Review> oldlist(books);

             if (num > 3)
        {
            // usuwa 2 elementy
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "Po usuniêciu:\n";
            for (pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
            // wstawia 1 element
            books.insert(books.begin(), oldlist.begin() + 1,
                    oldlist.begin() + 2);
            cout << "Po wstawieniu:\n";
            for (pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
        }
          books.swap(oldlist);
        cout << "Zamiana zawartoœci wektorów oldlist i books:\n";
        for (pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
    }
    else
        cout << "Bez wpisywania nie ma wyœwietlania.\n";
    cout << "Hello world!" << endl;
    return 0;
}

bool FillReview(Review & rr)
{
    std::cout << "Wpisz tytu³ ksi¹¿ki (koniec, aby zakoñczyæ): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "koniec")
        return false;
    std::cout << "Wpisz ocenê: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;
    // pozbycie siê reszty danych wejœciowych
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}


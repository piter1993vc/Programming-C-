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
         cout << "Dzi�kuj�. Wpisa�e� nast�puj�ce dane:\n"
            << "Ocena\tKsi��ka\n";
        for (int i = 0; i < num; i++)
            ShowReview(books[i]);
  cout << " Przypomnienie ocen:\n"
            << "Ocena\tKsi��ka\n";
            vector<Review>::iterator pr;
            for(pr=books.begin();pr!=books.end();pr++)
                ShowReview(*pr);
              vector <Review> oldlist(books);

             if (num > 3)
        {
            // usuwa 2 elementy
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "Po usuni�ciu:\n";
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
        cout << "Zamiana zawarto�ci wektor�w oldlist i books:\n";
        for (pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
    }
    else
        cout << "Bez wpisywania nie ma wy�wietlania.\n";
    cout << "Hello world!" << endl;
    return 0;
}

bool FillReview(Review & rr)
{
    std::cout << "Wpisz tytu� ksi��ki (koniec, aby zako�czy�): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "koniec")
        return false;
    std::cout << "Wpisz ocen�: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;
    // pozbycie si� reszty danych wej�ciowych
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}


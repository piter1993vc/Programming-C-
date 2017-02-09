
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
#include <iterator>
using namespace std;
struct Review {
    std::string title;
    int rating;
    double price;
};

bool operator<(shared_ptr<Review> &r1, shared_ptr<Review>  & r2);
bool worseThan(const shared_ptr<Review>  &r1, const shared_ptr<Review>  & r2);
bool FillReview(Review & rr);
void ShowReview(const shared_ptr<Review>  &rr);
int main()
{


    vector<shared_ptr<Review>> books;
  Review temp;
    while (FillReview(temp))
        books.push_back(shared_ptr<Review>(new Review(temp)));
    if (books.size() > 0)
    {

        cout << "Dzi�kuj�. Poda�e� "
            << books.size() << " ocen ksi��ek:\n"
            << "Ocena\tKsi��ka\n";
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end());
        cout << "Posortowane wed�ug tytu�u:\nOcena\tKsi��ka\n";
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end(), worseThan);
        cout << "Posortowane wed�ug oceny:\nOcena\tKsi��ka\n";
        for_each(books.begin(), books.end(), ShowReview);

        random_shuffle(books.begin(), books.end());
        cout << "Po wymieszaniu:\nOcena\tKsi��ka\n";
        for_each(books.begin(), books.end(), ShowReview);
    }
    else
        cout << "Brak danych. ";
    cout << "Koniec.\n";
    return 0;
}
bool operator<(shared_ptr<Review>  &r1, shared_ptr<Review>  &r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool worseThan(const shared_ptr<Review> &r1, const shared_ptr<Review>  & r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool FillReview(Review  & rr)
{

    std::cout << " Wpisz tytu� ksi��ki (koniec, aby zako�czy�): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "koniec")
        return false;
    std::cout << "Wpisz ocen�: ";
    std::cin >> rr.rating;
     std::cout << "Wpisz cen�: ";
    std::cin >> rr.price;

    if (!std::cin)
        return false;
    // pozbycie si� reszty danych wej�ciowych
    while (std::cin.get() != '\n')
        continue;

    return true;
}

void ShowReview(const shared_ptr<Review> &rr)
{
    std::cout << rr->rating << "\t" << rr->title <<"\t"<<rr->price<< std::endl;
}


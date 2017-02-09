#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>
using namespace std;
char toLower(char ch) { return tolower(ch); }
string & ToLower(string & st);
void display(const string & s);


int main()
{
        vector<string> words;
    cout << "Podaj s³owa (koniec, aby zakoñczyæ):\n";
    string input;
    while (cin >> input && input != "koniec")
        words.push_back(input);

    cout << "Poda³eœ nastêpuj¹ce s³owa:\n";
    for_each(words.begin(), words.end(), display);
    cout << endl;

 // umieszcza s³owa w zbiorze, przekszta³caj¹c du¿e litery na ma³e
    set<string> wordset;
    transform(words.begin(), words.end(),
            insert_iterator<set<string> >(wordset, wordset.begin()),
            ToLower);
    cout << "\nAlfabetyczna lista s³ów:\n";
    for_each(wordset.begin(), wordset.end(), display);
    cout << endl;




    // umieszcza s³owa i liczbê ich wyst¹pieñ w kontenerze map
    map<string, int> wordmap;
    set<string>::iterator si;
    for (si = wordset.begin(); si != wordset.end(); si++)
        wordmap[*si] = count(words.begin(), words.end(), *si);


 // wyœwietla zawartoœæ kontenera map
    cout << "\nLiczba wyst¹pieñ s³ów:\n";
    for (si = wordset.begin(); si != wordset.end(); si++)
        cout << *si << ": " << wordmap[*si] << endl;




    return 0;
}
string & ToLower(string & st)
{
    transform(st.begin(), st.end(), st.begin(), toLower);
    return st;
}

void display(const string & s)
{
    cout << s << " ";
}

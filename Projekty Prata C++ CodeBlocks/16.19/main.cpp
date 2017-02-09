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
    cout << "Podaj s�owa (koniec, aby zako�czy�):\n";
    string input;
    while (cin >> input && input != "koniec")
        words.push_back(input);

    cout << "Poda�e� nast�puj�ce s�owa:\n";
    for_each(words.begin(), words.end(), display);
    cout << endl;

 // umieszcza s�owa w zbiorze, przekszta�caj�c du�e litery na ma�e
    set<string> wordset;
    transform(words.begin(), words.end(),
            insert_iterator<set<string> >(wordset, wordset.begin()),
            ToLower);
    cout << "\nAlfabetyczna lista s��w:\n";
    for_each(wordset.begin(), wordset.end(), display);
    cout << endl;




    // umieszcza s�owa i liczb� ich wyst�pie� w kontenerze map
    map<string, int> wordmap;
    set<string>::iterator si;
    for (si = wordset.begin(); si != wordset.end(); si++)
        wordmap[*si] = count(words.begin(), words.end(), *si);


 // wy�wietla zawarto�� kontenera map
    cout << "\nLiczba wyst�pie� s��w:\n";
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

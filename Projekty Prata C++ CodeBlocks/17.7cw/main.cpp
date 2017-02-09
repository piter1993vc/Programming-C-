/*#include <iostream>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cctype>

using namespace std;

class Store
{

private:
     ofstream *os;
public:

    explicit Store( ofstream &str){os=&str;}
    ~Store(){}
    Store & operator()(const string &s)
    {
         size_t len=s.length();
        os->write((char*)&len,sizeof(size_t));
        os->write(s.data(),len);
        return *this;
    }

};

void show_vstr(const string &s);
void GetStr(ifstream &fin,vector<string> vstr);
int main()
{
    vector<string> vostr;
    string temp;


    cout<<"podaj lancuchy (aby zakonczyc , wprowadz pusty wiersz):\n";
    while(getline(cin,temp)&&temp[0]!='\0')
    {
        vostr.push_back(temp);
    }
    cout<<"oto twoje dane wejsciowe:\n";
    for_each(vostr.begin(),vostr.end(),show_vstr);

    ofstream fout("lancuchy.dat",ios_base::out|ios_base::binary);
    for_each(vostr.begin(),vostr.end(),Store(fout));
    fout.close();


    vector<string> vistr;
    ifstream fin("lancuchy.dat",ios_base::in|ios_base::binary);
    if(!fin.is_open())
    {
        cerr<<"nie mozna otworzyc pliku do odczytu!\n";
        exit(EXIT_FAILURE);
    }
    GetStr(fin,vistr);
    cout<<"oto lancuchy odczytane z pliku:\n";
    for_each(vistr.begin(),vistr.end(),show_vstr);
    return 0;
}
void show_vstr(const string &s)
{
    cout<<s<<endl;
}
void GetStr(ifstream &fin,vector<string> vstr)
{
    string temp;
    char ch;
    size_t len;
    while(fin.peek()&&!fin.eof())
    {
        fin.read((char*)&len,sizeof(size_t));
        for(size_t i=0;i<len;i++)
        {
            fin.read(&ch,sizeof(char));
            temp.push_back(ch);
        }
        vstr.push_back(temp);
        temp.clear();
    }
}*/


#include<iostream>
#include<cstdlib>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

class Store
{
private:
	ofstream * pfout;
public:
	Store(ofstream & fout) {pfout = &fout;}
	~Store() {}
	Store & operator()(const string & str)
	{
		size_t len = str.length();
		pfout->write((char *) &len, sizeof(size_t));
		pfout->write(str.data(), len);
		return *this;
	}
};

void ShowStr(const std::string & str);
void GetStrs(std::ifstream & fin, std::vector<std::string> & vistr);

int main(void)
{
	using namespace std;
	vector<string> vostr;
	string temp;

	// acquire strings
	cout << "Enter strings (empty line to quit):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	// store in a file
	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	// recover file contents
	vector<string> vistr;
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
		for_each(vistr.begin(), vistr.end(), ShowStr);


	return 0;
}

void ShowStr(const std::string & str)
{
	using std::cout;
	using std::endl;
	cout << str << endl;
}

void GetStrs(ifstream & fin, vector<string> & vistr)
{
	size_t len;
	string str;
	char ch;
	// check that there is something to read
	while (fin.peek() && !fin.eof())
	{
		fin.read((char *) &len, sizeof(size_t));
		for (size_t i = 0; i < len; i++)
		{
			fin.read(&ch, sizeof(char));
			str.push_back(ch);
		}
		vistr.push_back(str);
		str.clear();
	}
}

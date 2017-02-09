#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ostream outstr;
    string hdisc;
    cout<<"jak nazywa sie twoj dysk twardy? ";
    getline(cin,hdisc);
    int cap;
    cout<<"jaka jest pojemnosc dysku twardego";
    cin>>cap;
    oustr<<"dysk twardy"<<hdisc<<" ma pojemnosc "<<  cap<<" gigabajtow\n";
    string result=outstr.str();
    cout<<result;

    cout << "Hello world!" << endl;
    return 0;
}

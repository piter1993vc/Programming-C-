#include <iostream>

using namespace std;

int main()
{
    string s1="pingwin";
    string s2,s3;
    cout<<"jeden obiekt mozna przypisac innemu s2=s1\n";
    s2=s1;
    cout<<"s1: "<<s1<<" s2: "<<s2<<endl;

    cout<<"obiektowi mozna przypisac lancuch z konwencji C\n";
    cout<<"s2=\"myszolow\"\n";
    s2="myszlolow";
    cout<<"s2: "<<s2<<endl;
    cout<<"Mozna laczyc dwa lancuchy string: s3=s1+s2\n";
    s3=s1+s2;
    cout<<"s3: "<<s3<<endl;
    cout<<"mozna dodawac lancuchy \n";
    s1+=s2;
    cout<<"s1+=s2 daje s1: "<<s1<<endl;
    s2+="na dzien";
    cout<<"s2+=\"na dzien\" daje s2:"<<s2<<endl;

    return 0;
}

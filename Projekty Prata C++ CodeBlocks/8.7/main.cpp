#include <iostream>
#include <string>

using namespace std;
string version1(const string s1,const string s2);
const string & version2( string &s1,const string &s2);
const string & version3(string &s1,const string &s2);
int main()
{
    string cop;
    string init;
    string result;


    cout<<"podaj lancuch: "<<endl;
    getline(cin,init);
    cop=init;
    cout<<"wprowadzony lancuch: "<<init<<endl;
    result=version1(init,"***");
    cout<<"lancuch po wzbogaceniu "<<result<<endl;
    cout<<"lancuch oryginalny "<<init<<endl;

    result=version2(init,"++++");
    cout<<"lancuch po wzbogaceniu "<<result<<endl;
    cout<<"lancuch oryginalny "<<init<<endl;
    cout<<"przywrocenie oryginalnego lancucha:";
    init=cop;
    cout<<init<<endl;

   // result=version3(init,"@@@@@@@@@@@@");-->zly kod
   // cout<<"lancuch po wzbogaceniu "<<result<<endl;
    //cout<<"lancuch oryginalny "<<init<<endl;






    cout << "Hello world!" << endl;
    return 0;
}
 string version1(const string s1,const string s2)
 {
     string napis=s2+s1+s2;
     return napis;

 }

const string &  version2( string &s1,const string &s2)
{
    s1=s2+s1+s2;
    return s1;

}

const string & version3(string &s1,const string &s2)
{
    string s=s2+s1+s2;
    return s;

}

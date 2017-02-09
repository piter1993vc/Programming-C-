#include <iostream>

using namespace std;

int main()
{
    int temperature=26;
    cout<<"dzisiejsza temperatura wody: ";
    cout.setf(ios_base::showpos);
    cout<<temperature<<endl;
    cout<<"dla naszych znakjomych programistow bedzie to \n";
    cout<<hex<<temperature<<endl;
    cout.setf(ios_base::uppercase);
    cout.setf(ios_base::showbase);
    cout<<"lub\n";
    cout<<temperature<<endl;
    cout<<"jakie to prawdziwe (czyli" <<true<<")!ojej--jakie to prawdziwe(czyli ";
    cout.setf(ios_base::boolalpha);
    cout<<true<<")!\n";



    return 0;
}

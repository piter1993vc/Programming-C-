#include <iostream>

using namespace std;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    cout<<"podaj liczbe cakowita";
    int by;
    cin >>by;
    cout<<"zliczanie co "<<by<<endl;
    for(int i=0;i<100;i+=by)
    {
        cout<<"i="<<i<<endl;

    }
    cout << "Hello world!" << endl;
    return 0;
}

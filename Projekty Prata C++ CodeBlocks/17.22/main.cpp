#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string lit="dzien byl ciemny i burzowy ,lecz"
    "ksiezyc w pelni swiecil zywym blaskiem";
    istringstream la(lit);
    string result;
    while(la>>result)
    {
        cout<<result<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}

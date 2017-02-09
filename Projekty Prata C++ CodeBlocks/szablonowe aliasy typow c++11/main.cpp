#include <iostream>
#include <array>

using namespace std;
   template <typename T>
    using arrtype=std::array<T,12>;
int main()
{
arrtype<int> r;
r.at(0)=12;
    cout << r[0] << endl;
    return 0;
}

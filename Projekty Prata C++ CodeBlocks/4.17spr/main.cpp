#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <ctime>
#include <cstdlib>



int main()
{
    srand(time(0));
    const int liczba=10;
    std::vector<std::string> a1(liczba);
    std::array<std::string,liczba> a2;
    for(int i=0;i<liczba;i++)
    {
        a1.at(i)="balwan";
        a2.at(i)="kon";
        std::cout << a1[i] << std::endl;
        std::cout << a2[i] << std::endl;
    }

    return 0;
}

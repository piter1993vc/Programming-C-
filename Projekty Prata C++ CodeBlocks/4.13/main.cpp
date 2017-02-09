#include <iostream>
#include <string>

using namespace std;
struct inflatable{
std::string name;
float volume;
float price;
};
int main()
{
    inflatable boquet[2]={

    {"slonecznik",0.5,21.99},
    {"godzilla",0.3,21.79}

    };

    cout<<"goscie tacy jak "<<boquet[0].name<<" i "<<boquet[1].name<<" razem maja ";
    cout<<boquet[0].volume+boquet[1].volume<<" stop szesciennych";


    return 0;
}

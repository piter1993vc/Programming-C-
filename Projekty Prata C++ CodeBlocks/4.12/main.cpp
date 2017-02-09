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
    inflatable boquet={
    "sloneczniki",
    0.20,
    12.49

    };

    inflatable choice;

    cout<<"zmienna boquet: "<<boquet.name<<"za ";
    cout<<boquet.price<<" zl"<<endl;
    choice=boquet;


    cout<<"zmienna choice: "<<choice.name<<"za ";
    cout<<choice.price<<" zl"<<endl;



    cout << "Hello world!" << endl;
    return 0;
}

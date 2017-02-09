#include <iostream>
#include <new>
#include <cstdlib>


using namespace std;

struct big
{

    double stuff[200000];
};
int main()
{
    big *bi;

    cout<<"proba przydzialu wielkiego bloku pamieci ";
    bi=new (std::nothrow) big[10000];
    if(bi!=0)
    cout<<"udalo sie przebrnac przez instrukcje new ";





    if(bi==0)
    {
       cout<<"przechwycilem wyjatel!";

        exit(EXIT_FAILURE);
    }


    cout << "Hello world!" << endl;
    delete []bi;
    return 0;
}

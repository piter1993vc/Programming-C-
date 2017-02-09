#include <iostream>
#include <new>
#include <cstdlib>


using namespace std;

struct big
{

    double stuff[20000];
};
int main()
{
    big *bi;
    try{
    cout<<"proba przydzialu wielkiego bloku pamieci ";
    bi=new big[10000];
    cout<<"udalo sie przebrnac przez instrukcje new ";



    }
    catch(bad_alloc & ba)
    {
        cout<<"przechwycilem wyjatel!";
        cout<<ba.what()<<endl;
        exit(EXIT_FAILURE);
    }
    cout << "Hello world!" << endl;
    delete []bi;
    return 0;
}

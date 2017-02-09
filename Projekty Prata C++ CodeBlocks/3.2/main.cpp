#include <iostream>
#include <climits>

#define ZERO 0

int main()
{
    using namespace std;
    short sam=SHRT_MAX;
    unsigned short sue=sam;

        cout << "sam ma " <<sam<<" dolarow a sue ma : "<<sue<<" dolarow"<< endl;
        cout<<" do opbu kont dodaj 1$: "<<endl<<"teraz ";
        sam+=1;
        sue+=1;

        cout << " sam ma " <<sam<<" dolarow a sue ma : "<<sue<<" dolarow\n biedny sam"<< endl;
        sam=ZERO;
        sue=ZERO;

         cout << " sam ma " <<sam<<" dolarow a sue ma : "<<sue<<" dolarow "<< endl;
         sam-=1;
         sue-=1;

          cout << " sam ma " <<sam<<" dolarow a sue ma : "<<sue<<" dolarow\n szczesciara sue" << endl;

    return 0;
}

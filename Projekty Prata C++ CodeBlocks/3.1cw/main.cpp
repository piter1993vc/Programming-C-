#include <iostream>

using namespace std;

int main()
{
    const float cal_to_cm=2.54;
    const float feed_to_cm=30.48;
    cout<<"podaj swoj wzrost w centymetrach"<<endl;
    int wzrost;
    cin>>wzrost;
    double wzrost_cale=wzrost/cal_to_cm;
    double wzrost_stopy=wzrost/feed_to_cm;
    cout<<"masz " <<wzrost_cale<<" cali zwrostu"<<endl;
    cout<<"masz " <<wzrost_stopy<<" stop zwrostu"<<endl;

    cout << "Hello world!" << endl;
    return 0;
}

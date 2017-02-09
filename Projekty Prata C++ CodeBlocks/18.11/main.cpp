#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>



using namespace std;

int main()
{
    cout<<"podaj swoja wage: ";
    float weight;
    cin>>weight;
   string gain="10 procentowy przyrost ze";
   string wt=boost::lexical_cast<string>(weight);
   gain=gain+wt+" daje ";
   weight*=1.1;
   gain=gain+boost::lexical_cast<string>(weight)+" .";
   cout<<gain<<endl;

    return 0;
}

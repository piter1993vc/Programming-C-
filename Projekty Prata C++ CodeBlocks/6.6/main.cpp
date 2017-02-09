#include <iostream>

using namespace std;
const char * lancuszki[4]=
{
    "bieg na 10km.             \n",
    "przeciaganie swini.       \n",
    "pojedynek pinglarzy.      \n",
    "festiwal rzucania stolcem.\n",



};
int main()
{
    int age;
    int index;
    cout << "ile masz lat: " << endl;
    cin>>age;
    if(age>17&&age<35)
        index=0;
    else if(age>=35&&age<50)
        index=1;
    else if(age>=50&&age<65)
        index=2;
    else
        index =3;
    cout<<"kwalifikujesz sie do: "<<lancuszki[index]<<endl;
    return 0;
}

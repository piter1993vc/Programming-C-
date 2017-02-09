#include <iostream>

using namespace std;
const int min_per_h=60;
struct time
{
    int minuty;
    int godziny;
};
time suma(time s1,time s2);
void show(time s);

int main()
{
    time str_1{45,3};
    time str_2{23,34};
    time str_3=suma(str_1,str_2);
    cout<<"suma 2 struktur "<<endl;
  show(str_3);

  cout<<"suma 3 struktur "<<endl;
  show(suma(str_3,(time){2,3})); //literal zlozony strykturalny

    cout << "Hello world!" << endl;
    return 0;
}
time suma(time s1,time s2)
{
    time sumka;
    sumka.minuty=(s1.minuty+s2.minuty)%min_per_h;
    sumka.godziny=s1.godziny+s2.godziny+(s1.minuty+s2.minuty)/min_per_h;


    return sumka;
}

void show(time s)
{
    cout<<s.minuty<<" minut "<<endl;
    cout<<s.godziny<<" godzin "<<endl;

}

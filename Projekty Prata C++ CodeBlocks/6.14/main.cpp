#include <iostream>

using namespace std;
const int max_size=6;

int main()
{
    int golf[max_size];

    cout << "witam w wyliczaczu sredniej z wynikow gry w golfa\n" << endl;
    cout<<"mozesz podac max "<<max_size<<" wynikow!\n";
    int i;
    for(i=0;i<max_size;i++)
    {
        cout<<"podaj wynik nr "<<i+1<<" .: ";
        while(!(cin>>golf[i]))
        {
            cout<<"wprowadziles zla dana!"<<endl;
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout<<"podaj ponownie wynik nr "<<i+1<<" .: ";
        }
    }
    double total=0.0;
   for(int j=0;j<max_size;j++)
   {
       total+=golf[j];

   }
    cout<<"srednia z wynikow to "<<(double)total/i<<endl;

    return 0;
}

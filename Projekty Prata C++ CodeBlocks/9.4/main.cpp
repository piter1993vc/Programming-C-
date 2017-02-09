#include <iostream>

using namespace std;
void oil(int x);
int main()
{

    int texas=31;
    int year=2011;
   cout<<" w funkcji main() texas="<< texas<<",&texas= "<<&texas<<endl;
   cout<<"w funkcji main() year=     "<<year<<" &year= "<<&year<<endl;

   oil(texas);
   cout<<" w funkcji main() texas="<< texas<<",&texas= "<<&texas<<endl;
   cout<<"w funkcji main() year=     "<<year<<" &year= "<<&year<<endl;


    cout << "Hello world!" << endl;
    return 0;
}
void oil(int x)
{
   using namespace std;
   int texas=5;
   cout<<" w funkcji oil() texas="<< texas<<",&texas= "<<&texas<<endl;
   cout<<"w funkcji oil() x=     "<<x<<" &x= "<<&x<<endl;
   {
    int texas=113;
    cout<<"wewnatrz bloku texas ="<<texas<<" &texas="<<&texas<<endl;
    cout<<"w funkcji oil() x=     "<<x<<" &x= "<<&x<<endl;





   }

   cout<<"za blokiem texas= "<<texas<<" &texas= "<<&texas<<endl;








}

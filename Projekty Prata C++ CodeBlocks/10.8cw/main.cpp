#include <iostream>
#include <array>

using namespace std;
namespace KLASA
{
    class List{

private:
    static const int ile=10;
    array<string,ile> lista;

  uint16_t pole;
public:
    List(){for(int i=0;i<ile;i++)lista[i]='\0'; pole=0;}
    bool isempty(int index);
    bool isfully(int index);
    bool add_to_position(const string &s,int indeks);
    bool remove_from_position(int indeks);
    void show_position(int indeks);
};
}

int main()
{
    using namespace KLASA;
    List elementy;
    elementy.show_position(1);
    elementy.add_to_position("ala",1);
    elementy.show_position(1);
    elementy.add_to_position("alan",4);
    elementy.show_position(4);
    elementy.remove_from_position(1);
    elementy.show_position(1);
    elementy.remove_from_position(4);
    elementy.show_position(4);


    cout << "Hello world!" << endl;
    return 0;
}
namespace KLASA{


       bool List::isempty(int index)
       {

         return (pole&(1<<(index-1)))==0;
       }

    bool List::isfully(int index)
    {

        return (pole&(1<<(index-1)))==1;
    }

    bool List::add_to_position(const string &s,int indeks)
    {
        if(isfully(indeks))
        {
            std::cout<<"indeks nr: "<<indeks<<" jest zajety!"<<endl;
            return false;
        }
        else
            pole|=(1<<(indeks-1));
            lista[indeks-1]=s;
        std::cout<<"wartosc: "<<s<<" dodana na pozycje o numerze: "<<indeks<<endl;
        return true;
    }

    bool List::remove_from_position(int indeks)
    {
        string wartosc;
     if(isempty(indeks))
     {

         cout<<"na pozycji numer: "<<indeks<<" nic nie ma"<<endl;
         return false;
     }
     else
     {
      pole&=~(1<<(indeks-1));
       wartosc=lista[indeks-1];
     lista[indeks-1]='\0';
     cout<<"usunieto wartosc "<<wartosc<<" z pozycji nr: "<<indeks<<endl;
     return true;
     }
    }

    void List::show_position(int indeks)
    {

        if(isempty(indeks))
        {
            cout<<"na pozycji numer: "<<indeks<<" nic nie ma"<<endl;
        }
        else

          cout<<"znaleziono wartosc "<<lista[indeks-1]<<" na  pozycji nr: "<<indeks<<endl;
    }






}

#include <iostream>

using namespace std;
class TableTennisPlayer
{

private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn="brak",const string &ln="brak",bool ht=false);
    void Name()const;
    bool HasTable()const {return hasTable;}
    void ResetTable(bool v){hasTable=v;}
};

int main()
{



    TableTennisPlayer player1("jacek","pogodny",true);
    TableTennisPlayer player2("teresa","bogatko",false);
    player1.Name();
    if(player1.HasTable())
        cout<<" posiada stol "<<endl;
    else
        cout<<" nie podiada stolu "<<endl;
        player2.Name();
    if(player2.HasTable())
        cout<<" posiada stol "<<endl;
    else
        cout<<" nie podiada stolu "<<endl;



    cout << "Hello world!" << endl;
    return 0;
}
 TableTennisPlayer::TableTennisPlayer(const string &fn,const string &ln,bool ht):
     firstname(fn),lastname(ln),hasTable(ht){}

      void TableTennisPlayer::Name()const
      {

          std::cout<<lastname<<", "<<firstname<<std::endl;
      }

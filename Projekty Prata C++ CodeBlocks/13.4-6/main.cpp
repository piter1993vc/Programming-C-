#include <iostream>

using namespace std;
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn="brak",const string & ln="brak",bool ht=false);
    void Name()const;
    bool HasTable(){return hasTable;}
    void resetTable(bool v){hasTable=v;}



};



class RatedPlayer: public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r=0,const string fn="brak",const string & ln="brak",bool ht=false);
    RatedPlayer(unsigned int r,const TableTennisPlayer &tp);
    unsigned int Rating()const {return rating;}
    void reserRating(unsigned int r){rating=r;}



};
int main()
{
    TableTennisPlayer player1("teresa","bogatko",false);
    RatedPlayer rplayer1(1140,"maciej","kaczkowski",false);
    rplayer1.Name();
    if(rplayer1.HasTable())
    cout<<" posiada stol\n";
    else
        cout<<"nie posiada stolu" <<endl;

        player1.Name();
        if(player1.HasTable())
            cout<<"posiada stol"<<endl;
        else
            cout<<"nie posiada stolu"<<endl;
        cout<<"nazwisko i imie"<<endl;
        rplayer1.Name();
        cout<<"ranking"<<rplayer1.Rating()<<endl;
        RatedPlayer rplayer2(1212,player1);
        cout<<"nazwisko i imie "<<endl;
        rplayer2.Name();
        cout<<"ranking"<<rplayer2.Rating()<<endl;










    return 0;
}
  TableTennisPlayer::TableTennisPlayer(const string &fn,const string & ln,bool ht):
      firstname(fn),lastname(ln),hasTable(ht)
      {

      }
    void TableTennisPlayer::Name()const
    {

        cout<<firstname<<" , "<<lastname<<endl;
    }


    RatedPlayer::RatedPlayer(unsigned int r,const string fn,const string & ln,bool ht):
        TableTennisPlayer(fn,ln,ht)
    {
        rating=r;


    }
    RatedPlayer::RatedPlayer(unsigned int r,const TableTennisPlayer &tp): TableTennisPlayer(tp),rating(r)
    {
    }

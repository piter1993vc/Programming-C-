#include <iostream>
#include <string>
#include <valarray>

using namespace std;
class Student: private std::string, private std::valarray<double>
{

private:
    typedef std::valarray<double> ArrayDb;
    std::ostream & arr_out(std::ostream & os)const;
public:
    Student():string("brak"), ArrayDb(){}
    explicit Student(const std::string & s): string(s),ArrayDb(){}
    explicit Student(int i): string("brak"),ArrayDb(i){}
    Student(const std::string & s,int i): string(s),ArrayDb(i){}
    Student(const std::string &s,const ArrayDb & a):string(s),ArrayDb(a){}
    Student(const char *str,const double *pd,int n):string(str),ArrayDb(pd,n){}
    ~Student(){}
    double Average()const;
    const std::string & Name()const;
    double & operator[](int i);
    double operator[](int i)const;
    friend ostream & operator<<(std::ostream & os,const Student & stu);
    friend istream & operator>>(std::istream & os, Student & stu);
    friend std::istream & getline(std::istream & os, Student & stu);
    using ArrayDb::min; //<----udostepnianie metod pudlicznych przy dziedziczeniu prywatnym





};
void seter(Student &sa,int n);
const int pupils=3;
const int quizzes=5;
int main()
{
    Student ada[pupils] ={Student(quizzes),Student(quizzes),Student(quizzes)};
    int i;
    for(i=0;i<pupils;i++)
    seter(ada[i],quizzes);
        cout<<"lista studentow:\n";
                for(i=0;i<pupils;i++)
            ada[i].Name();
            cout<<"wyniki:";
              for(i=0;i<pupils;i++)
              {
                  cout<<endl<<ada[i];
                cout<<"srednia: "<<ada[i].Average()<<endl;
              }

    cout<<"gotowe";
cout<<ada[0].min()<<endl;

    return 0;
}
void seter(Student &sa,int n)
{

    cout<<"podaj imie i nazwisko studenta:";
    getline(cin,sa);
    cout<<"podaj "<<n<<" wynikow testow: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>sa[i];
        cin.clear();
        while(cin.get()!='\n')
            continue;

    }
}
    double Student::Average()const
    {
      if(ArrayDb::size()>0)
      {
          return ArrayDb::sum()/ArrayDb::size();

      }
         else
            return 0;
    }
    const std::string & Student::Name()const
    {
        return (const string &)*this;
    }
    double & Student::operator[](int i)
    {
        return ArrayDb::operator[]( i);
    }
    double Student::operator[](int i)const
    {

        return ArrayDb::operator[](i);
    }



     std::ostream & Student::arr_out(std::ostream & os)const
     {
         int i;
         int lim=ArrayDb::size();
         if(lim>0)
         {
             for(i=0;i<lim;i++)
             {
                 os<<ArrayDb::operator[](i)<<" ";
                 if(i%5==0&&i!=0)
                    os<<endl;
             }
             if(i%5!=0)
                os<<endl;
         }
         else
            os<<"tablica jest pusta"<<endl;
            return os;
     }

     ostream & operator<<(std::ostream & os,const Student & stu)
    {
        os<<"wyniki "<<(string &)stu<<endl;
        stu.arr_out(os);
        return os;
    }
     istream & operator>>(std::istream & is, Student & stu)
    {

       is>>(string &)stu;
       return is;
    }
    std::istream & getline(std::istream & is, Student & stu)
    {

        std::getline(is,(string &)stu);
        return is;
    }

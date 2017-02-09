#include <iostream>
#include <string>
#include <valarray>

using namespace std;
class Student{

private:
    typedef std::valarray<double> ArrayDb;
    std::string name;
    ArrayDb scores;
    std::ostream & arr_out(std::ostream & os)const;
public:
    Student():name("brak"), scores(){}
    explicit Student(const std::string & s): name(s),scores(){}
    explicit Student(int i): name("brak"),scores(i){}
    Student(const std::string & s,int i): name(s),scores(i){}
    Student(const std::string &s,const ArrayDb & a):name(s),scores(a){}
    Student(const char *str,const double *pd,int n):name(str),scores(pd,n){}
    ~Student(){}
    double Average()const;
    const std::string & Name()const;
    double & operator[](int i);
    double operator[](int i)const;
    friend ostream & operator<<(std::ostream & os,const Student & stu);
    friend istream & operator>>(std::istream & os, Student & stu);
    friend std::istream & getline(std::istream & os, Student & stu);




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
      if(scores.size()>0)
      {
          return scores.sum()/scores.size();

      }
         else
            return 0;
    }
    const std::string & Student::Name()const
    {
        return name;
    }
    double & Student::operator[](int i)
    {
        return scores[i];
    }
    double Student::operator[](int i)const
    {
        return scores[i];

    }



     std::ostream & Student::arr_out(std::ostream & os)const
     {
         int i;
         int lim=scores.size();
         if(lim>0)
         {
             for(i=0;i<lim;i++)
             {
                 os<<scores[i]<<" ";
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
        os<<"wyniki "<<stu.name<<endl;
        stu.arr_out(os);
        return os;
    }
     istream & operator>>(std::istream & is, Student & stu)
    {

       is>>stu.name;
       return is;
    }
    std::istream & getline(std::istream & is, Student & stu)
    {

        std::getline(is,stu.name);
        return is;
    }

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
class String{

private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM=10;
public:
    String();
    String(const char *s);
    String(const String &s);
    ~String();
    int lenght()const {return len;}
    String & operator=(const String &a);
    String & operator=(const char *a);
    char & operator[](int i);
    const char & operator[](int i)const;
    friend bool operator<(const String &st,const String &st2);
    friend bool operator>(const String &st,const String &st2);
    friend bool operator==(const String &st,const String &st2);
    friend ostream  & operator<<(ostream &os,const String &st);
    friend istream  & operator>>(istream &is, String &st);


    static int HowMany();




};





    const int arsize=10;
    const int maxlen=81;
int main()
{
srand(time(0));
    String name;
    cout<<"czesc, jak masz na imie?\n";
    cin>>name;
    cout<<name <<" wpisz do "<<arsize<<" krotkich powiedzonek <pusty wiersz konczy wprowadzanie>:\n";
    String sayings[arsize];
    char temp[maxlen];
    int i;
    for(i=0;i<arsize;i++)
    {


        cout<<i+1<<" : ";
        cin.get(temp,maxlen);
        while(cin&&cin.get()!='\n')
            continue;
        if(!cin||temp[0]=='\0')
            break;
        else
            sayings[i]=temp;


    }
    int total=i;
    if(total>0)
    {
        cout<<"oto twoje powiedzonka: \n";
        for(i=0;i<total;i++)
            cout<<sayings[i]<<endl;


            String *shortest=&sayings[0];
            String *first=&sayings[0];


            for(i=1;i<total;i++)
            {

               if(sayings[i].lenght()<shortest->lenght())
                shortest=&sayings[i];
               if(sayings[i]<*first)
                first=&sayings[i];

            }


            cout<<"najkrotsze powiedzonko: \n"<<*shortest<<endl;
            cout<<" powiedzonko alfabetycznie pierwsze:\n"<<*sayings<<endl;


            int choice=rand()%total;
            String *favorite=new String(sayings[choice]);
            cout<<" moje ulubione powiedzonko:\n"<<*favorite<<endl;

delete favorite;
    }
    else
        cout<<"brak danych! Pa\n";



    return 0;
}









  int String::num_strings=0;
   int String::HowMany()
   {

       return num_strings;
   }

  String::String()
  {

      len=4;
      str=new char[1];
      str[0]='\0';
      num_strings++;
  }
    String::String(const char *s)
    {
        len=strlen(s);
        str=new char[len+1];
        strcpy(str,s);
        num_strings++;
    }
    String::String(const String &s)
    {
    num_strings++;
   len=s.len;
     str=new char[len+1];
   strcpy(str,s.str);

    }
    String::~String()
    {
        --num_strings;
        delete[]str;

    }

    String & String::operator=(const String &a)
    {
        if(this==&a)
        return *this;
        delete[]str;
        len=a.len;
        str=new char[len+1];
        strcpy(str,a.str);
        return *this;
    }

    String & String::operator=(const char *a)
    {
        delete[]str;
        len=strlen(a);
        str=new char[len+1];
        strcpy(str,a);
        return *this;
    }

    char & String::operator[](int i)
    {
        return str[i];
    }

    const char & String::operator[](int i)const
    {
        return str[i];
    }

     bool operator<(const String &st,const String &st2)
     {
        return (strcmp(st.str,st2.str)<0);
     }

     bool operator>(const String &st,const String &st2)
     {
        return st2<st;
     }


     bool operator==(const String &st,const String &st2)
     {
        return (strcmp(st.str,st2.str)==0);
     }

     ostream  & operator<<(ostream &os,const String &st)
     {
         os<<st.str;
        return os;
     }




   istream  & operator>>(istream &is ,String &st)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is)
    st=temp;
    while(is&&is.get()!='\n')
        continue;
    return is;

}



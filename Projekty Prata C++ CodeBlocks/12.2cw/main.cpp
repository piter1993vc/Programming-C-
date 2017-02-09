#include <iostream>
#include <cstring>
#include <cctype>

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
    friend String  operator+(const String &a,const String &b);
    char & operator[](int i);
    const char & operator[](int i)const;
    friend bool operator<(const String &st,const String &st2);
    friend bool operator>(const String &st,const String &st2);
    friend bool operator==(const String &st,const String &st2);
    friend ostream  & operator<<(ostream &os,const String &st);
    friend istream  & operator>>(istream &is, String &st);
    void string_low();
    void string_up();
    static int HowMany();
    void where_char(const char a);
    int how_char(const char a);



};





int main()
{
    String a="BRawwWO";
    String b="klaczk";
    String c=a+b;
    String d="aaaaarrTTT";
    cout<<a<<" ma "<<a.lenght()<<" znakow "<<endl;
    cout<<b<<" ma "<<b.lenght()<<" znakow "<<endl;
    cout<<c<<" ma "<<d.lenght()<<" znakow "<<endl;
    cout<<d<<" ma "<<d.lenght()<<" znakow "<<endl;
    a.string_low();
    cout<<c<<" ma "<<a.lenght()<<" znakow "<<endl;
    d.string_up();
    cout<<d<<" ma "<<d.lenght()<<" znakow "<<endl;
    b.where_char('k');o

    cout<<b<<" zawiera "<<b.how_char('k')<<" znak k"<<endl;


    /*const int arsize=10;
    const int maxlen=81;
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
            cout<<sayings[i][0]<<": "<<sayings[i]<<endl;
            int shortest=0;
            int first=0;
            for(i=1;i<total;i++)
            {

               if(sayings[i].lenght()<sayings[shortest].lenght())
                shortest=i;
               if(sayings[i]<sayings[first])
                first=i;

            }
            cout<<"najkrotsze powiedzonko: \n"<<sayings[shortest]<<endl;
            cout<<" powiedzonko alfabetycznie pierwsze:\n"<<sayings[first]<<endl;
            cout<<"program wykorzystal "<<String::HowMany()<<" objektow klasy String>hej!\n";



    }
    else
        cout<<"brak danych! Pa\n";


*/
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
      num_strings;
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
    num_strings;
   len=s.len;
     str=new char[len+1];
   strcpy(str,s.str);

    }
    String::~String()
    {
        --num_strings;
        delete[]str;

    }

       String  operator+(const String &a,const String &b)
       {
           String c;
           c.len=a.len+b.len;
           char temp[c.len+1];
           strcpy(temp,a.str);
           strcat(temp,b.str);
           delete []c.str;
           c.str=new char[c.len+1];
           strcpy(c.str,temp);

           return c;




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
        str=new char[len];
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
void String::string_low()
{

    char temp[len+1];
    int i;
    for(i=0;i<len;i++)
    {
        if(isupper(str[i]))
            temp[i]=tolower(str[i]);
        else
          temp[i]=str[i];





    }
    temp[i]='\0';

        delete []str;
        str=new char[len+1];
        strcpy(str,temp);
}

void String::string_up()
{

    char temp[len+1];
    int i;
    for(i=0;i<len;i++)
    {
        if(islower(str[i]))
            temp[i]=toupper(str[i]);
        else
          temp[i]=str[i];





    }
    temp[i]='\0';

        delete []str;
        str=new char[len+1];
        strcpy(str,temp);
}
    void String::where_char(const char a)
    {
        int i;
        for(i=0;i<len;i++)
        {
            if(str[i]==a)
                cout<<"znak: "<<a<<" znaleziony na pozycji nr: "<<i+1<<endl;




        }



    }
     int String::how_char(const char a)
     {
         int licz=0;
              int i;
        for(i=0;i<len;i++)
        {
            if(str[i]==a)
               licz++;




        }
        return licz;

     }


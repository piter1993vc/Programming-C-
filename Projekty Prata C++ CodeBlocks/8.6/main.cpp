#include <iostream>
#include <string>

using namespace std;
struct free{
string name;
int made;
int attempts;
float percent;

};

void display(const free &str);
void setpc( free &str);
free & acumulate( free &str1,const free &str2);
int main()
{
free one{"izabela branch",13,14};
free two{"konski leb",10,16};
free three{"koza",8,11};
free four{"looper",5,9};
free five{"long long",6,14};
free team{"coco loco",0,0};
free dup;

setpc(one);
display(one);
acumulate(team,one);
display(team);

display(acumulate(team,two));
acumulate(acumulate(team,three),four);
display(team);

dup=acumulate(team,five);
cout<<"statystyka dla team "<<endl;
display(team);
cout<<"statystyka dla dup po przypisaniu "<<endl;
display(dup);

setpc(four);

acumulate(dup,five)=four;

cout<<"statystyka dla dup po zlym przypisaniu "<<endl;
display(dup);




    cout << "Hello world!" << endl;
    return 0;
}
void display(const free &str)
{
   cout<<"imie= "<<str.name<<endl;
   cout<<"trafionych= "<<str.made<<endl;
   cout<<"rzutow= "<<str.attempts<<endl;
   cout<<"skutecznosc= "<<str.percent<<endl;

}

void setpc( free &str)
{
    if(str.attempts!=0)
    {
       str.percent=100.0f*float(str.made)/float(str.attempts);


    }
    else
        str.percent=0;


}

free & acumulate( free &str1,const free &str2)
{
    str1.attempts+=str2.attempts;
    str1.made+=str2.made;
    setpc(str1);
    return str1;

}

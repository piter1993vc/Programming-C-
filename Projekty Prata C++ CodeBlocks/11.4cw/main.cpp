#include <iostream>

using namespace std;
class Time{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h,int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0,int m=0);
    friend Time operator+(const Time &t1,const Time &t2);
    friend Time operator-(const Time &t1,const Time &t2);
    friend Time operator*(double n,const Time &t){return n*t;}
    friend ostream & operator<<(ostream &os,const Time &t);





};
int main()
{
    Time a(1,35);
    Time b(2,37);
    Time c=a+b;
    cout<<c;

    return 0;
}
    Time::Time()
    {
        hours=minutes=0;

    }
    Time::Time(int h,int m)
    {
       hours=h;
       minutes=m;
       hours+=minutes/60;
       minutes%=60;

    }
    void Time::AddMin(int m)
    {
        minutes+=m;
        hours+=minutes/60;
        minutes%=minutes;

    }
    void Time::AddHr(int h)
    {
        hours+=h;

    }
    void Time::Reset(int h,int m)
    {

        hours=h;
        minutes=m;
    }
    Time operator+(const Time &t1,const Time &t2)
    {
        return Time(t1.hours+t2.hours,t1.minutes+t2.minutes);

    }
    Time operator-(const Time &t1,const Time &t2)
    {
        return Time(t1.hours-t2.hours,t1.minutes-t2.minutes);

    }

     ostream & operator<<(ostream &os,const Time &t)
    {

        os<<"godzinny: "<<t.hours<<" minuty "<<t.minutes<<std::endl;
        return os;
    }

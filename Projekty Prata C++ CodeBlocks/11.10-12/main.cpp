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
    Time operator+(const Time &t)const;
    Time operator-(const Time &t)const;
    Time operator*(double n)const;
    friend Time operator*(double n,const Time &t){return n*t;}
    friend ostream & operator<<(ostream &os,const Time &t);





};
int main()
{
    Time t1(2,45);
    Time t2(2,46);

    cout<<t1<<t2<<endl;
    Time t3=t1+t2;
    cout<<t3<<endl;
    cout << "Hello world!" << endl;
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
    Time Time::operator+(const Time &t)const
    {
        return Time(hours+t.hours,minutes+t.minutes);

    }
    Time Time::operator-(const Time &t)const
    {
        return Time(hours-t.hours,minutes-t.minutes);

    }
    Time Time::operator*(double n)const
    {
        return Time(hours*n,minutes*n);

    }
     ostream & operator<<(ostream &os,const Time &t)
    {

        os<<"godzinny: "<<t.hours<<" minuty "<<t.minutes<<std::endl;
        return os;
    }

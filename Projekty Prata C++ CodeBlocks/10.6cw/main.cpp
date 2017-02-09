#include <iostream>

using namespace std;
class Mover{
private:
    double x;
    double y;

public:
    Mover(double a=0,double b=0);
    void showmove()const;
    Mover add(const Mover &m)const;
    void reset(double a=0,double b=0);



};
int main()
{
    Mover a(3,4);
    a.showmove();
    Mover b;
    b=a;
    b.showmove();
    b=b.add(a);
    cout << "Hello world!" << endl;
    return 0;
}
Mover::Mover(double a,double b)
{
    x=a;
    y=b;

}

void Mover::showmove()const
{
    cout<<"x "<<x<<endl;
    cout<<"y "<<y<<endl;


}

Mover Mover::add(const Mover &m)const
{
    Mover a;
    a.x=this->x+m.x;
    a.y=this->y+m.y;
    return a;

}

void Mover::reset(double a,double b)
{

    x=a;
    y=b;



}





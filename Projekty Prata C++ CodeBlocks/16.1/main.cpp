#include <iostream>
#include <string>




int main()
{
    using namespace std;
    string one("Zwyciezca loterii");
    cout<<one<<endl;
    string two(20,'$');
    cout<<two<<endl;
    string three(one);
    cout<<three<<endl;
    one+="Ups!";
    cout<<one<<endl;
    two="przepraszam to byl";
    three[10]='k';
    string four;
    four=two+three;
    cout<<four<<endl;
    char alls[]="wszystko co dobre, co sie dobrze konczy";
    string five(alls,22);
    cout<<five<<endl;
    string six(alls+9,alls+14);
    cout<<six<<endl;
    string seven(&five[9],&five[14]);
    cout<<seven<<endl;
    string eight(four,20,9);
    cout<<eight<<" w akcji "<<endl;




    return 0;
}

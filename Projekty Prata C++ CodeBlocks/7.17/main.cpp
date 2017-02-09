#include <iostream>

using namespace std;
const int x=66;
const int y=6;
void sub(char *tab,int low,int high,int level);
int main()
{
    char tab[x];
    int i;
    for(i=1;i<x-2;i++)
        tab[i]=' ';
    tab[x-1]='\0';
    int maxim=x-2;
    int minim=0;
    tab[maxim]=tab[minim]='|';
     cout<<tab<<endl;
    for( i=1;i<=y;i++)
    {

        sub(tab,minim,maxim,i);
        cout<<tab<<endl;
        for(int j=1;j<x-2;j++)
        {
            tab[j]=' ';
        }
    }

    cout << "Hello world!" << endl;
    return 0;
}
void sub(char *tab,int low,int high,int level)
{
    if(level==0)
        return;

    int mid=(low+high)/2;
    tab[mid]='|';
    sub(tab,low,mid,level-1);
    sub(tab,mid,high,level-1);

}

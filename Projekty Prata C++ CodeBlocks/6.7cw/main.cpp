#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    cin.get(ch);
    int samogloski=0;
    int spolgloski=0;
    int inne=0;
    bool w_slowie=false;

    while(ch!='q')

    {

       if(isalpha(ch)&&!w_slowie)
       {
           w_slowie=true;
           switch(ch)
           {
          case 'a':
          case 'e':
          case 'i':
          case 'j':
          case 'o':
          case 'y': samogloski++; break;

          case 'b':
          case 'c':
          case 'd':
          case 'f':
          case 'g':
          case 'h':
          case 'k':
          case 'm':
          case 'n':
          case 'p':
          case 'r':
          case 's':
          case 't':
          case 'w':
          case 'z': spolgloski++; break;
           }

       }
       if(!isalpha(ch)&&!w_slowie&&!isspace(ch))
       {
           w_slowie=true;
           inne++;

       }




 cin.get(ch);
        if(isspace(ch))
        {
           w_slowie=false;

        }
        cout<<w_slowie<<endl;
    }
    cout << "na samogloske " <<samogloski<< endl;
    cout << "na spolgloske " <<spolgloski<< endl;
    cout << "na inne" <<inne<< endl;
    return 0;
}

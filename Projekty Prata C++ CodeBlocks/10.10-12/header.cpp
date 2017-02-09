
#include <iostream>
#include "header.h"



Stack::Stack()
{

    top=0;

}
    bool Stack::isfull()const
    {
        return top==MAX;

    }
        bool Stack::isempty()const
    {
        return top==0;

    }

    bool Stack::push(const Item &item)
    {
        if(top<MAX)
        {
              items[top++]=item;
        return true;


        }
        else
        {
            std::cout<<"stos pelny\n";
            return false;
        }



    }

    bool Stack::pop(Item &item)
    {
        if(top>0)
        {
            item=items[top--];
            return true;


        }
        else
        {

            std::cout<<"nie ma co zdejmowac\n";
            return false;
        }

    }

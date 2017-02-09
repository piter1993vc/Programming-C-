#include <iostream>
#include <cmath>
#include "coordin.h"


polar rect_to_polar(rect xypos)
{

    polar str;
    str.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    str.angle=atan2(xypos.y,xypos.x);
    return str;
}

void show_polar(polar dapos)
{
   std::cout<<"odleglosc: "<<dapos.distance<<std::endl;
   std::cout<<"kat: "<<dapos.angle<<std::endl;

}


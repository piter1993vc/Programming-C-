
#ifndef HEADER_H_
#define HEADER_H_


const int len=40;
struct golf{

char fullname[len];
int handicap;




};
void setgolf(golf & g,const char *name, int hc);
void setgolf(golf & g);
void showgolf(const golf &g);






#endif // HEADER_H_

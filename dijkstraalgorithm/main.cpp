#include <iostream>
#include<graphics.h>
using namespace std;

int main()
{
    initwindow(1000,1000);
    int xs,ys,xe,ye;
    cout<<"Enter the starting point";
    cin>>xs>>ys;
    cout<<"Enter the ending point";
    cin>>xe>>ye;
    line(xs,ys,200,500);
    line(200,500,600,500);
    line(xs,ys,200,10);
    line(600,500,xe,ye);
    line(200,10,xe,ye);
    line(xs,ys,500,500);
    line(500,500,xe,ye);
    outtextxy(xs,ys,"Start");
    outtextxy(xe,ye,"End");

    getch();
    return 0;
}

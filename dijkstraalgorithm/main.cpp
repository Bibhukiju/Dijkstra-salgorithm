#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

float checkdistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));

}
void colorfill(int a[4],int b[4],int c[4])
{
    //co0rdinates of line AC
    int xa1=a[0];
    int ya1=a[1];
    int xa2=a[2];
    int ya2=a[3];

    //coordinates of line AF
    int xb1=b[0];
    int yb1=b[1];
    int xb2=b[2];
    int yb2=b[3];

    //coordinates of AB

    int xc1=c[0];
    int yc1=c[1];
    int xc2=c[2];
    int yc2=c[3];
    float AC = checkdistance(xa1,ya1,xa2,ya2);
    cout<<AC<<endl;
    float AF=checkdistance(xb1,yb1,xb2,yb2);
    cout<<AF<<endl;
    float AB=checkdistance(xc1,yc1,xc2,yc2);
    cout<<AB<<endl;
    setcolor(RED);

    if((AF < AB)&&(AF < AC))
    {
        line(xb1,yb1,xb2,yb2);
    }
    else
    {
        if(AB < AC)
            line(xc1,yc1,xc2,yc2);
            else
                line(xa1,ya1,xa2,ya2);
            }

}

int main()
{
    initwindow(1000,1000);
    int xs,ys,xe,ye;
    cout<<"Enter the starting point";
    cin>>xs>>ys;
    cout<<"Enter the ending point";
    cin>>xe>>ye;
    line(xs,ys,200,500);
    delay(100);//Ac
    int ac[4]= {xs,ys,200,500};
    line(200,500,600,500);
    line(xs,ys,200,10);//AB
    int ab[4]= {xs,ys,200,10};
    line(600,500,xe,ye);
    line(200,10,xe,ye);
    line(xs,ys,500,400);//AF
    int af[] = {xs,ys,500,400};
    line(500,400,xe,ye);
    outtextxy(xs,ys,"Start");
    outtextxy(xe,ye,"End");
    colorfill(ac,af,ab);
    getch();
    return 0;
}

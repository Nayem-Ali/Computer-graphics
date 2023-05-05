#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, " ");
    int x1,y1,x2,y2;
    cout << "Enter starting co-ordinates: ";
    cin >> x1 >> y1;

    cout << "Enter ending co-ordinates: ";
    cin >> x2 >> y2;

    int dx=x2-x1,dy=y2-y1;
    float M = dy*1.0/dx*1.0;
    int x=x1,y=y1;


    while(x<=x2)
    {
        putpixel(x,y,GREEN);

        if(M >0 && M <= 1)
        {
            x++;
            y += M;
        }
        else if(M > -1 &&  M <= 0)
        {
            x--;
            y -= M;
        }
        else if(M > 1)
        {
            x += (1/M);
            y++;
        }
        else
        {
            x -= (1/M);
            y--;
        }
    }
    getch();
    closegraph();
    return 0;
}

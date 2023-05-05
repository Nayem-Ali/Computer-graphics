#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int xc,yc;
void drawCircle(int x, int y){
    putpixel(x+xc,y+yc, RED);
    putpixel(-x+xc,y+yc, RED);
    putpixel(-x+xc,-y+yc, RED);
    putpixel(x+xc,-y+yc, RED);
    putpixel(-y+yc,x+xc,RED);
    putpixel(-y+yc,-x+xc,RED);
    putpixel(y+yc,-x+xc,RED);
    putpixel(y+yc,x+xc,RED);
}
int main(){
    int gd=DETECT, gm;
    initgraph(&gd, &gm, " ");
    int x,y,r;

    cout << "Enter Center Co-ordinates and Radius of circle: ";
    cin >> xc >> yc >> r;

    x = 0, y = r;
    int d = 3- 2*r;

    while(x<=y){
        drawCircle(x,y);
        if(d<0){
            d = d + 4*x + 6;
        }
        else{
            d= d + 4*(x-y) + 10;
            y--;
        }
        x++;
    }
    getch();
    closegraph();
    return 0;
}

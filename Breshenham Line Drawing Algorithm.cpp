#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
    int gd=DETECT, gm;
    initgraph(&gd, &gm, " ");

    int x1,x2,y1,y2,x,y;

    cout << "Enter starting co-ordinates: ";
    cin >> x1 >> y1;

    cout << "Enter ending co-ordinates: ";
    cin >> x2 >> y2;

    x = x1, y=y1;

    int dx = x2-x1, dy = y2-y1;
    int d = 2*dy - dx, dT = 2*(dy-dx), dS = 2*dy;

    putpixel(x,y,RED);

    while(x<x2){
        x++;
        if(d<0) d+=dS;
        else{
            d+=dT;
            y++;
        }
        putpixel(x,y,RED);
    }
    getch();
    closegraph();
    return 0;
}

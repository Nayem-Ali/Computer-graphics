#include<bits/stdc++.h>

using namespace std;

float xmin,ymin,xmax,ymax;

int main()
{
    cin >> xmin >> ymin >> xmax >> ymax;

    int test = 5;
    while(test--)
    {
        bool isVisible = 1;
        float x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        float dy = y2 - y1, dx = x2 - x1;

        float p1 = -dx, p2 = dx, p3 = -dy, p4 = dy;
        float q1 = x1-xmin, q2 = xmax - x1, q3 = y1 - ymin, q4 = ymax - y1;
        float r1 = q1/p1, r2 = q2/p2, r3 = q3/p3, r4 = q4/p4;

        float t1=0,t2=1;

        float p[4] = {p1,p2,p3,p4}, q[4] = {q1,q2,q3,q4}, r[4] = {r1,r2,r3,r4};

        for(int i=0 ; i<4 ; i++)
        {
//            cout << p[i] << "  " << q[i] << endl;
            if(p[i]==0 && q[i] < 0)
            {
                isVisible = 0;
                break;
            }

            else if(p[i]<0)
                t1 = max(t1,r[i]);
            else if (p[i]>0)
                t2 = min(t2,r[i]);
        }
//        cout << "t1: " << t1 << " t2: " << t2 << endl;
    float x1new,y1new,x2new,y2new;
    if(t1 > t2 || !isVisible){
            cout << "Line is not visible" << endl;

        }
    else if (t1 == 0 && t2 == 1 && isVisible){
        cout << "Line is completly inside of window" << endl;

    }
    else{
        x1new = x1 + t1 * dx;
        y1new = y1 + t1 * dy;
        x2new = x1 + t2 * dx;
        y2new = y1 + t2 * dy;
        cout << x1new << " " << y1new << endl;
        cout << x2new << " " << y2new << endl;
    }
}
return 0;
}

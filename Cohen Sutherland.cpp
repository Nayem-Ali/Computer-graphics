#include<bits/stdc++.h>

using namespace std;
float xmin,ymin,xmax,ymax;

string allBits(float x1 , float y1){

    string bits = "";

    if (y1 - ymax > 0) bits += "1";
    else bits += "0";

    if (ymin - y1 > 0) bits+= "1";
    else bits += "0";

    if (x1 - xmax > 0) bits+= "1";
    else bits += "0";

    if (xmin - x1 > 0) bits+= "1";
    else bits += "0";

    return bits;
}



int main(){

    cin >> xmin >> ymin >> xmax >> ymax;

    int t=8;
    while(t--){

        float x1new,y1new,x2new,y2new;
        float x1,y1,x2,y2;

        cin >> x1 >> y1 >> x2 >> y2;

        string A = allBits(x1,y1);
        string B = allBits(x2,y2);

        cout << A << "  " << B << endl;

        if(A.find("1") == -1 && B.find("1") == -1){
            cout << "Line is visible" << endl;
        }
        else if(A.find("1") == B.find("1")){
            cout << "Line is not visible" << endl;
        }

        else{
                float m = (y2-y1) / (x2-x1);
                cout << m << endl;
                if(A[0]=='1' || A[1] == '1'){
                    y1new = A[0]=='1' ? ymax : ymin;
                    x1new = x1 + ((y1new - y1)/m);
                    cout << "After clip A: " << x1new << " " << y1new << endl;
                }

                else {
                    x1new = A[2]=='1' ? xmax : xmin;
                    y1new = y1 + m*(x1new - x1);
                    cout << "After clip A: " << x1new << " " << y1new << endl;
                }

                if(B[0]=='1' || B[1] == '1'){
                    y2new = B[0]=='1' ? ymax : ymin;
                    x2new = x2 + ((y2new - y2)/m);
                    cout << "After clip B: " << x2new << " " << y2new << endl;
                }

                else {
                    x2new = B[2]=='1' ? xmax : xmin;
                    y2new = y2 + m*(x2new - x2);
                    cout << "After clip B: " << x2new << " " << y2new << endl;
                }
        }
   }
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t, xa, ya, xb, yb, xf, yf, dist;
    cin >> t;
    while(t--){
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xf >> yf;
        if((xf > xa && xf > xb) || (xf < xa && xf < xb))
            dist = abs(xa - xb) + abs(ya - yb);
        else if((yf > ya && yf > yb) || (yf < ya && yf < yb))
            dist = abs(xa - xb) + abs(ya - yb);
        else if(xa == xb){
            dist = abs(ya - yb);
            if(xf == xa)
                dist += 2;
        }
        else if(ya == yb){
            dist = abs(xb - xa);
            if(yf == ya)
                dist += 2;
        }
        else
            dist = abs(xa - xb) + abs(ya - yb);
        cout << dist << endl;
    }
    return 0;
}
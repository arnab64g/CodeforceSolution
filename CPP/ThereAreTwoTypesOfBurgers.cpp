#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int b, p, f, h, c, cost;
        cin >> b >> p >> f;
        cin >> h >> c;
        b /= 2;
        if (b < 1)
            cost = 0;
        else if((p+f) <= b)
            cost = p*h + c*f;
        else if(h > c){
            if(p >= b)
                cost = h*b;
            else{
                cost = p*h;
                b -= p;
                if(b >= f)
                    cost += f*c;
                else cost += b*c;
            }
        }
        else{
            if(f >= b)
                cost = c*b;
            else{
                cost = f*c;
                b -= f;
                if(b >= p)
                    cost += p*h;
                else cost += b*h;
            }
        }
        cout << cost << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int t, a, b, c, max, d, e, f, mmx;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a == b && b == c)
            cout << "1 1 1" << endl;
        else
        {
            mmx = 0;
            max = (a > b) ? a : b;
            max = (max > c) ? max : c;
            if(a < max)
                d = max - a +1;
            else {
                d = 0;
                mmx++;
            }
            if(b < max)
                e = max - b + 1;
            else{
                 e = 0;
                 mmx++;
            }
            if(c < max)
                f = max - c +1;
            else{
                f = 0;
                mmx++;
            }
            if (mmx > 1)
            {
                if (d == 0)
                    d++;
                if (e == 0)
                    e++;
                if (f == 0)
                    f++;
            }
            cout << d << " " << e << " " << f << endl;
        }   
    }
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t, k, sq, r, c, s;
    cin >> t;
    while (t--)
    {
        cin >> k;
        sq = sqrt(k);
        s = sq*sq;
        if(s == k){
            r = 1;
            c = sq;
        }
        else if((k - s) <= sq){
            r = sq+1;
            c = k - s;
        }
        else {
            c = sq + 1;
            r = k - s;
            r -= c;
            r = c - r;
        }
        cout << c << " " << r << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int t, n, c0, c1, h, cost, cost1, cost2, zeros, ones;
    string s;
    cin >> t;
    while (t--){
        cin >> n >> c0 >> c1 >> h;
        cin >> s;
        if(c0 == c1)
            cost = n*c1;
        else{
            zeros = 0;
            ones = 0;
            for (int i = 0; i < n; i++){
                if(s[i] == '0')
                    zeros++;
                else ones++;
            }
            if(c0 > c1)
                cost1 = c1*n + h*zeros;
            else cost1 = c0*n + h*ones;
            cost2 = c0 * zeros + c1 * ones;
            cost = (cost1 < cost2) ? cost1 : cost2;
        }
        cout << cost << endl;
    }
    return 0; 
}
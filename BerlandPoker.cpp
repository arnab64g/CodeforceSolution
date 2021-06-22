#include <iostream>
using namespace std;
int main()
{
    int t, n, m, k, w;
    cin >> t;
    while (t--){
        cin >> n >> m >> k;
        int max1, max2;
        max1 = n/k;
        if(max1 >= m)
            w = m;
        else{
            m -= max1;
            k--;
            max2 = m / k;
            if(m % k != 0)
                max2++;
            w = max1 - max2;
        }
        cout << w << endl;
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, x, a, b;
        cin >> n >> x >> a >> b; 
        int maxd = abs(a-b);
        maxd += x;
        if(maxd > n-1)
            cout << n - 1 << endl;
        else cout << maxd << endl;
    }
    return 0;
}
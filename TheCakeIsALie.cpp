#include <iostream>
using namespace std;
int main()
{
    int t, n, m, k, cost;
    cin >> t;
    while (t--){
        cin >> n >> m >> k;
        cost = m*n - 1;
        if(cost == k)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
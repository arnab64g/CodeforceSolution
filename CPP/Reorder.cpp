#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, m, a, sum = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            cin >> a;
            sum += a;
        }
        if (sum == m)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
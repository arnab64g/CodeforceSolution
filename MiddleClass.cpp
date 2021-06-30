#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, k;
    long long total;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int a[n];
        total = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > k){
                total += a[i] - k;
                a[i] = k;
            }
        }
        sort(a, a+ n);
        int count = 0;
        for (int i = n - 1; i >= 0; i--){
            if(a[i] == k)
                count++;
            else if(k - a[i] <= total){
                    total -= k - a[i];
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
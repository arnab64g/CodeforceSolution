#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t, n, k, count;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int s = sqrt(n);
        bool res = false;
        count = INT32_MAX;
        for (int i = 1; i <= s; i++){
            if(n % i == 0){
                if(i <= k)
                    count = min(count, n/i);
                if(n / i <= k)
                    count = min(count, i);
            }
        }
        cout << count << endl;
    }
    return 0;
}
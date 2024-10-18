#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a , a + n);
        n--;
        while(n >= 0){
            if(a[n] > n+1)
                n--;
            else break;
        }
        cout << n + 2 << endl;
    }
    return 0;
}
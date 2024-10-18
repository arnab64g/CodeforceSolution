#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, t, cn, num;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    cin >> t;
    while (t--){
        cin >> cn;
        num = upper_bound(a, a+n, cn) - a;
        cout << num << endl;
    }
    return 0;
}

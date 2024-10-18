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
        sort(a, a+n);
        bool res = false;
        for (int i = 1; i < n; i++)
            if (a[i] - a[i-1] == 1){
                res = true;
                break;
            }
        if (res)
            cout << "2" << endl;
        else cout << "1" << endl;
    }
    return 0;
}
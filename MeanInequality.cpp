#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, l;
    cin >> t;
    while (t--){
        cin >> n;
        l = 2*n;
        int a[l];
        for (int i = 0; i < l; i++)
            cin >> a[i];
        sort(a, a+l);
        for (int i = 0; i < n; i++)
            cout << a[i] << " " << a[l-i-1] << " ";
        cout << endl;   
    }
    return 0;
}

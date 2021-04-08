#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, a[1005], min, dis;
    cin >> t ;
    while (t--){
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        min = a[1] - a[0];
        for (int i = 2; i < n; i++){
            dis = abs(a[i] - a[i-1]);
            if (dis < min)
                min = dis;
        }
        cout << min << endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n,  sum;
    cin >> t;
    while (t--){
        sum = 0;        
        cin >> n;
        int a[n] = {0};
        for (int i = 0; i < n; i++){
            cin >> a[i] ;
            sum += a[i];
        }
        sort(a, a+n);
        int m = a[0];
        int count = 1;
        for (int i = 1; i < n; i++){
            if (m != a[i])
                break;
            count++;
        }
        cout << n - count << endl;   
    }
    return 0;
}
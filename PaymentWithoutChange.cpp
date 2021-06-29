#include <iostream>
using namespace std;
int main()
{
    int t, a, b, n, S, count, sum;
    cin >> t;
    while (t--){
        cin >> a >> b >> n >> S;
        count  = S / n;
        if(count > a)
            count = a;
        sum = n * count;
        sum += b;
        if(sum < S)
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
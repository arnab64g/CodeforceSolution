#include <iostream>
using namespace std;
int main()
{
    int t, a, b, c, n, max;
    cin >> t;
    while (t--){
        cin >> a >> b >> c >> n;
        max = (a > b) ? a : b;
        if (c > max)
            max = c;
        n -= 3 * max - (a+b+c);

        if (n % 3 == 0 && n >= 0)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
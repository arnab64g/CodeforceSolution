#include <iostream>
using namespace std;
int main()
{
    int t, n, md, count;
    cin >> t;
    while (t--){
        cin >> n;
        count = n/2020;
        md = n%2020;
        if (md <= count)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
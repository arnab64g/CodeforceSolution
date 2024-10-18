#include <iostream>
using namespace std;
int main()
{
    int t, n, toVal, th;
    bool res;
    cin >> t;
    while (t--){
        cin >> n;
        if (n < 60)
            res = false;
        else{
            th = 180 - n;
            toVal = 360/th;
            if ((n*toVal) % 180 == 0)
                res = true;
            else res = false;
        }
        if (res)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
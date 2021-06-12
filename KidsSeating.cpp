#include <iostream>
using namespace std;
int main()
{
    int t, n, val;
    cin >> t;
    while (t--) {
        cin >> n;
        val = 4*n - 2;
        while (n--){
            cout << val << " ";
            val -= 2;
        }
        cout << endl;
    }
    return 0;
}
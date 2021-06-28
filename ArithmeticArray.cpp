#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int a, n, sum = 0, h;
        cin >> n;
        h = n;
        while (n--){
            cin >> a;
            sum += a;
        }
        if(sum == h)
            cout << "0" << endl;
        else if(sum < h)
            cout << "1" << endl;
        else cout << sum - h << endl;
    }
    return 0;
}
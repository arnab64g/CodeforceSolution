#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x, y, cx = 0, cy = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        cx += x;
    }
    for (int i = 0; i < n; i++){
        cin >> y;
        cy += y;
    }
    if(cx < cy)
        cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
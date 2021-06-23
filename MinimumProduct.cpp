#include <iostream>
using namespace std;
int main()
{
    int t;
    long long a, b, x, y, n;
    cin >> t;
    while (t--){
        cin >> a >> b >> x >> y >> n;
        if(n >= (a-x) + (b - y))
            cout << x * y << endl;
        else{
            long long value1, value2, temp;
            if(n >= a - x){
                temp = n - a + x;
                value1 = x * (b - temp);
            }
            else value1 = (a - n) * b;
            if(n >= b - y){
                temp = n - b + y;
                value2 = y * (a - temp);
            }
            else value2 = a * (b - n);
            if(value1 < value2)
                cout << value1 << endl;
            else cout << value2 << endl;
        }
    }
    return 0;
}
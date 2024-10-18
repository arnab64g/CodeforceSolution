#include <iostream>
using namespace std;
int main()
{
    int n, t, h;
    int d = 0;
    cin >> n >> t;
    while (n >= t){
        h = n%t;
        n -= h;
        d += n;
        n = n/t;
        n += h;
    }
    d += n;
    cout << d << endl;
    return 0;
}
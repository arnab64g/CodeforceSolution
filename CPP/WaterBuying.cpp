#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        long long p1, p2, n, a, b;
        cin >> n >> a >> b ;
        p1 = n*a;
        p2 = (n/2) * b;
        if(n % 2 != 0)
            p2 += a;
        if (p1 < p2)
            cout << p1 << endl;
        else cout << p2 << endl;   
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int t;
    long long a, b;
    cin >> t;
    while (t--){
        cin >>  a >> b;
        if(b == 1)
            cout << "NO" << endl;
        else cout << "YES\n"  << a << " " << a * b << " " << a * b + a << endl;
    }
    return 0;
}
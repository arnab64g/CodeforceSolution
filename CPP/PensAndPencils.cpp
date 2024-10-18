#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d, k;
        int l, p;
        cin >> a >> b >> c >> d >> k;
        l = a/c;
        p = b/d;
        if(a % c != 0)
            l++;
        if(b%d != 0)
            p++;
        if((l+p) > k)
            cout << "-1" << endl;
        else cout << l << " " << p << endl; 
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    if(a < x)
        cout << "NO" << endl;
    else{
        a -= x;
        if((a+b) < y)
            cout << "NO" <<endl;
        else{
            int tmp = a+b-y;
            if ((tmp +c) < z)
                cout << "NO" <<endl;
            else cout << "YES" << endl;   
        }
    }
    return 0;
}
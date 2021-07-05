#include <iostream>
using namespace std;
int main()
{
    int t, n, len, value;
    cin >> t;
    while (t--){
        int o = 0, e = 0;
        cin >> n;
        len  = n*2;
        for (int i = 0; i < len; i++){
            cin >> value;
            if(value % 2 == 0)
                e++;
            else
                o++;
        }
        if(e == o)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
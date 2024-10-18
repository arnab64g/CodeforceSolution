#include <iostream>
using namespace std;
int main()
{
    int t, n, a1, a2, pos, max;
    bool res;
    cin >> t;
    while (t--){
        cin >> n;
        cin >> a1;
        max = a1;
        pos = 1;
        res = false;
        for (int i = 2; i <= n; i++){
            cin >> a2;
            if(a2 != a1){
                res = true;
                if(a2 > a1 && a2 >= max){
                    max = a2;
                    pos = i;
                }
                else if(a1 > a2 && a1 >= max){
                    max = a1;
                    pos = i-1;
                }
                a1 = a2;
            }
        }
        if(res && n!= 1)
            cout << pos << endl;
        else cout << "-1" << endl;   
    }
    return 0;
}
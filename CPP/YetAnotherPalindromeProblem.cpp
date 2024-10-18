#include <iostream>
using namespace std;

int main()
{
    int t, n;
    bool res;
    cin >> t;
    while(t--){
        cin >> n;
        res = false;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(a[i] == a[j] && abs(i - j) >= 2)
                    res = true;
            }
            if(res)
                break;
        }
        if(res)
            cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    return 0;
}

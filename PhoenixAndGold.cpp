#include <iostream>
using namespace std;
int main()
{
    int t, n, k, w, temp;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int a[n];
        w = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++){
            w += a[i];
            if(w == k){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        w +=a[n - 1];
        if(w == k)
            cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
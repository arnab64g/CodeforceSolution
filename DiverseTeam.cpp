#include <iostream>
using namespace std;
int main()
{
    int n, k, top = 0;
    cin >> n >> k;
    int a[n], idx[k];
    bool flg[101] = {false};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++){
        if (!flg[a[i]]){
            idx[top++] = i+1;
            k--;
            flg[a[i]] = true;
        }
        if(!k)
            break;
    }
    if(!k){
        cout << "YES" << endl;
        for (int i = 0; i < top; i++)
            cout << idx[i] << " ";
        cout << endl;
        
    }
    else cout << "NO" << endl;
    
    
    return 0;
}
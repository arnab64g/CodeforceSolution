#include<iostream>
using namespace std;
int main()
{
    int t, n, l, vl, count;
    cin >> t;
    while (t--){
        cin >> n;
        l = n*2;
        int a[l+1] = {0};
        for (int i = 0; i < n; i++){
            cin >> vl;
            a[vl-1]++;
        }
        count = 0;
        for (int i = 0; i < l; i++){
            if(a[i] != 0)
                count++;
            if (a[i] > 1){
                a[i+1]++;
                a[i]--;
            }
        }
        if(a[l] != 0)
            count++;
        cout << count << endl;   
    }
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
void lengthOfArray(int[], int);
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        lengthOfArray(a, n);
    }
    return 0;
}
void lengthOfArray(int a[], int n)
{
    int val = a[0];
    bool res = true;
    for (int i = 1; i < n; i++)
        if(a[i] != val){
            res = false;
            break;
        }
    if(res)
        cout << n << endl;
    else cout << 1 << endl;    
}
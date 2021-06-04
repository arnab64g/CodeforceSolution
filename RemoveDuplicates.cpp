#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    bool r[1001] = {false};
    cin >> n;
    int a[n], d[n];
    int top = -1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - 1; i >= 0; i--)
        if(!r[a[i]]){
            r[a[i]] = true;
            d[++top] = a[i];
        }
    cout << top + 1 << endl;
    for (int i = top; i >= 0; i--)
        cout << d[i] << " ";
    cout << endl;
    return 0;
}
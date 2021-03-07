#include <iostream>
using namespace std;

int main()
{
    int n, k,  count = 0;
    int a[60];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    k = a[k-1];
    for (int i = 0; i < n; i++)
        if (a[i] != 0 && a[i] >= k)
            count++;
    cout << count<<endl;
    return 0;
}
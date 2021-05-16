#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i += 2)
        count += abs(a[i] - a[i+1]);
    cout << count << endl;
    return 0;
}
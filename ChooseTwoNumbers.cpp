#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int la, lb;
    cin >> la;
    int a[la];
    for (int i = 0; i < la; i++)
        cin >> a[i];
    cin >> lb;
    int b[lb];
    for (int i = 0; i < lb; i++)
        cin >> b[i];
    sort(a, a+la);
    sort(b, b+lb);
    cout << a[la-1] << " " << b[lb-1] << endl;
    return 0;
}

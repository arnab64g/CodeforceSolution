#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, number, top;
    int num[60];
    cin >> t;
    while (t--)
    {
        cin >>n;
        for (int i = 0; i < n; i++)
            cin >> num[i];
        sort(num, num+n, greater<int>());
        top = n - 1;
        while (true){
            if (top == 0)
                break;
            if (abs(num[top] - num[top-1]) > 1)
                break;
            else top--;
        }
        if (top == 0)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
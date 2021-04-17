#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        int value = a[0];
        int count = 1;
        for (int i = 1; i < n; i++){
            if(value != a[i]){
                value = a[i];
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
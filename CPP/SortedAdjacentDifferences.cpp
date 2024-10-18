#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        int ptr1, ptr2;
        ptr1 = n/2 - 1;
        if(n % 2 != 0){
            cout << a[n / 2] << endl;
            ptr2 = n/2 + 1;
        }
        else
            ptr2 = n / 2;
        while (ptr1 >= 0)
            cout << a[ptr1--] << " " << a[ptr2++] << " "; 
        cout << endl;
    }
    return 0;
}
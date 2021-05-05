#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        int a[100];
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int count = 0;
        int v = a[0];  
        for (int i = 0; i < n; i++){
            if (a[i] == v)
                count++;
            else break;
        }
        cout << n -  count << endl;   
    }
    return 0;
}
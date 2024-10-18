#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int max, smax;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b, b+n);
        
        max = b[n-1];
        smax = b[n-2];
        
        for (int i = 0; i < n; i++)
        {
            if (a[i] == max)
            {
                cout << a[i] - smax << " ";
            }
            else{
                cout << a[i] - max << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
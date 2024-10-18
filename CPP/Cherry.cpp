#include<iostream>
using namespace std;
int main()
{
    int t, n;
    long long a, b, max, value;
    cin >> t;
    while (t--){
        cin >> n;
        max = -1;
        cin >> a;
        for (int i = 1; i < n; i++){
            cin >> b;
            value = a * b;
            if(value > max)
                max = value;
            a = b;
        }
        cout << max << endl;
    }
    return 0;
}
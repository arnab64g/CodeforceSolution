#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t, n, max, value;
    long long sum;
    double mxav;
    cin >> t;
    while (t--)
    {
        sum = 0;
        max = INT32_MIN;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> value;
            if(max < value)
                max = value;
            sum += value;
        }
        mxav = (double)(sum - max)/ (n - 1);
        mxav += (double) max;
        cout << setprecision(9) << fixed << mxav << endl;
    }
    
    return 0;
}
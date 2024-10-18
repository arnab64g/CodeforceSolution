#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void calculateNumber(int, int[]);
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        calculateNumber(n, a);
    }
    return 0;
}
void calculateNumber(int n, int a[])
{
    vector<double> res;
    if (n == 1){
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            res.push_back((double)(a[j] - a[i])/2);
    sort(res.begin(), res.end());
    int count = 1;
    double vl = res[0];
    for (double x: res)
        if (x != vl){
            vl = x;
            count++;
        }
    cout << count << endl;
}
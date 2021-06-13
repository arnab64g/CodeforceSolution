#include <iostream>
using namespace std;
int KthNumber(int, int);
int main()
{
    int t, n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        cout << KthNumber(k, n) << endl;
    }
    return 0;
}
int KthNumber(int k, int n)
{
    int res = k;
    int diff = k / n, prediff = 0;
    int addmore = diff - prediff;
    while (addmore){
        prediff = res/n;
        res += addmore;
        diff = res / n;
        addmore = diff - prediff;
    }
    return res;
}
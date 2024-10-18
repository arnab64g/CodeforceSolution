#include <iostream>
using namespace std;
int MaximumBarl(int);
int main()
{
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        cout << MaximumBarl(n) << endl;
    }
    return 0;
}
int MaximumBarl(int n)
{
    int sum = 0, mod;
    while (n > 9){
        mod = n % 10;
        n /= 10;
        sum += n * 10;
        n += mod;
    }
    sum += n;
    return sum;
}
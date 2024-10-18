#include <iostream>
using namespace std;
int main()
{
    int t, n, k, count, m;
    cin >> t;
    while (t--){
        cin >> n >> k;
        if(k == n)
            cout << "1" << endl;
        else if(n == 1)
            cout << k << endl;
        else if(n < k){
            count = k/n;
            if(k%n)
                count++;
            cout << count << endl;
        }
        else {
            count = n / k;
            if(n%k)
                count++;
            k *= count;
            count = k / n;
            if(k%n)
                count++;
            cout << count << endl;
        }
    }
    return 0;
}
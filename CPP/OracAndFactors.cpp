#include <iostream>
#include <cmath>
using namespace std;
int SmallestDiv(int);
int main()
{
    int t, n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        n += SmallestDiv(n);
        k--;
        n += 2 * k;
        cout << n << endl;
    }
    return 0;
}
int SmallestDiv(int n)
{
    int d = sqrt(n), sd;
    bool res = false;
    for (int i = 2; i <= d; i++){
        if(n % i == 0){
            sd = i;
            res = true;
            break;
        }
    }
    if(!res)
        return n;
    else return sd;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n, sum;
    cin >> n;
    sum = ((n+1) * n)/2;
    if(sum %2 == 1)
        cout << "1" << endl;
    else cout << "0" << endl;
    return 0;
}
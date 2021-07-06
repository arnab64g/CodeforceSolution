#include<iostream>
using namespace std;
int main()
{
    int n, t, a, sum = 0, sum1 = 0, j = 0;
    cin >> n >> t;
    for (int i = 0; i < n; i++){
        cin >> a ;
        sum1 += a;
        sum += a+10;
        j += 2;
    }
    if(sum-10 > t)
        cout << "-1" << endl;
    else{
        sum -= 10;
        j -= 2;
        int temp = (t - sum) / 5;
        j += temp;
        cout << j << endl;
    }
    return 0;
}
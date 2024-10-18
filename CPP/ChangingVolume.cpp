#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t, a, b, diff, count;
    cin >> t;
    while (t--){
        cin >> a >> b;
        diff = abs(a - b);
        count = diff / 5;
        if(diff % 5 > 2)
            count += 2;
        else if(diff % 5 > 0) count++;
        cout << count << endl; 
    }
    return 0;
}
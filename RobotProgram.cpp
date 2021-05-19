#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t, x, y, max, cmd;
    cin >> t;
    while (t--){
        cin >> x >> y;
        if(abs(x-y) < 2)
            cmd = x+y;
        else{
            max = abs(x) > abs(y) ? abs(x) : abs(y); 
            cmd = 2*max-1;
        }
        cout << cmd << endl;
    } 
    return 0;
}
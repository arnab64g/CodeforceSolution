#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, m, max, min, sqr, a, b, val;
    cin >> n >> m;
    int count = 0;
    if(n > m){
        max = n;
        min = m;
    }
    else{
        max = m;
        min = n;
    }
    sqr = sqrt(min);
    for (int b = 0; b <= sqr; b++){
        a = min - b*b;
        val = a*a + b;
        if(val == max)
            count++;
    }
    cout << count << endl;
    return 0;
}
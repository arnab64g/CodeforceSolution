#include <iostream>
using namespace std;
int main()
{
    int a, n, count1 = 0, extra0 = 0, max = -1;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a == 1){
            count1++;
            if (extra0 > 0)
                extra0--;
        }
        else{
            extra0++;
            if (extra0 > max)
                max = extra0;
        }
    }
    cout << count1 + max;
    return 0;
}
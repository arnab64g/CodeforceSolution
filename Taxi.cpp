#include <iostream>
using namespace std;
int main()
{
    int n, a[4] = {0, 0, 0, 0}, mem, total = 0, n1;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> mem;
        a[mem-1]++;
    }
    total += a[3];
    if (a[0] > a[2]){
        n1 = a[0] - a[2];
        total += a[2];
    }
    else{
        n1 = 0; 
        total += a[2];
    }
    total += a[1]/2;
    if (a[1] % 2 != 0){
        total++;
        if (n1 == 1)
            n1--;
        else if (n1 >= 2)
            n1 -= 2;
    }
    total += n1/4;
    if (n1 % 4 != 0)
        total++;
    cout << total;
    return 0;
}
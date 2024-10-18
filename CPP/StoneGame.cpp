#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, t, a, max, min, posmax, posmin, mind1, mind2, init, fnl, count;
    cin >> t;
    while (t--){
        cin >> n;
        cin >> a;
        max = a;
        posmax = 1;
        min = a;
        posmin = 1;
        for (int i = 2; i <= n; i++){
            cin >> a;
            if(a > max){
                max = a;
                posmax = i;
            }
            if(a < min){
                min = a;
                posmin = i;
            }
        }
        if(posmax < n - posmax + 1){
            mind1 = posmax;
            init = posmax;
            fnl = posmax;
        }
        else{ 
            mind1 = n - posmax + 1;
            fnl = posmax;
            init = posmax;
        }
        if(posmin < n - posmin + 1){
            mind2 = posmin;
            if(init > posmin)
                init = posmin;
        }
        else{ 
            mind2 = n - posmin + 1;
            if(fnl < posmin)
                fnl = posmin;
        }
        if ((n - fnl + 1) < init){
            mind1 = n - fnl + 1;
            mind2 = init;
        }
        else{
            mind1 = init;
            mind2 = n - fnl + 1;
        }
        count = mind1;
        if(abs(posmax - posmin) < mind2)
            count += abs(posmax - posmin);
        else count += mind2;
        cout << count << endl;
    }
    return 0;
}
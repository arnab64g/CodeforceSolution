#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t, n, a, b, s;
    cin >> t;
    while (t--){
        cin >> n;
        s = sqrt(n);
        int i = 2;
        while (i <= s){
            if(n % i == 0){
                a = i;
                n /= a;
                break;
            }
            else i++;
        }
        if(i > s){
            cout << "NO" << endl;
            continue;
        }
        i++;
        while (i <= s){
            if(n % i == 0){
                b = i;
                n /= b;
                break;
            }
            else i++;
        }
        if(i > s){
            cout << "NO" << endl;
            continue;
        }
        if (n != a && n != b){
            cout << "YES" << endl;
            cout << a << " " << b << " " << n << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
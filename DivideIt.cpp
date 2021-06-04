#include <iostream>
using namespace std;
int main()
{
    int t, count;
    long long n;
    cin >> t;
    while (t--){
        cin >> n;
        count = 0;
        while (n != 1){
            if(n % 2 == 0){
                n /= 2;
                count++;
            }
            else if (n % 3 == 0){
                n /= 3;
                n *= 2;
                count++;
            }
            else if (n % 5 == 0){
                n /= 5;
                n *= 4;
                count++;
            }
            else break;
        }
        if(n != 1){
            cout << "-1" << endl;
            continue;
        }
        cout << count << endl;
    }
    return 0;
}
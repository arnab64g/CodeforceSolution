#include<iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    bool res;
    while (n){
        if(n % 10 == 1){
            res = true;
            count = 0;
        }
        else if( n % 10 == 4){
            res = false;
            count++;
            if(count == 3)
                break;
        }
        else {
            res = false;
            break;
        }
        n /= 10;
    }
    if(res)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
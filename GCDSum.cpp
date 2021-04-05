#include <iostream>
using namespace std;
bool gcdcal(long long, int);
int main(){ 
    int t, n2;
    long long n, n1;
    cin >> t;
    while (t--){
        cin >> n;
        while (true){
            n1 = n;
            n2 = 0;
            while (n != 0){      
                n2 += n%10;
                n /= 10;
            }
            if (!gcdcal(n1, n2))
                n = n1+1;
            else break;
        }
        cout << n1 << endl;    
    }
    return 0;
}
bool gcdcal(long long x, int y){
    bool res = false;
    for (int i = 2; i <= y; i++){
        if (x%i == 0 && y%i == 0){
            res = true;
            break;
        }
    }
    return res;
}
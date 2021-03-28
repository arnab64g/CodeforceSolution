#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n == 1) return  false;
    int sqrt = sqrtl(n);
    bool res = true;
    for (int i = 2; i <= sqrt; i++)
        if (n%i == 0){
            return false;
        }
    return res;
}
bool isTPrime(long long n){
    bool res;
    long long sqrt = sqrtl(n);
    if (sqrt*sqrt == n){
        if(isPrime(sqrt))
            return true;
        else return false;
    }
    else
    return false;
}
int main()
{
    bool res;
    int n ;
    cin >> n;
    long long numbers[n];
    for(int i = 0; i < n; i++)
        cin >> numbers[i];
    for (int i = 0; i < n; i++){
        if (isTPrime(numbers[i]))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

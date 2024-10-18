#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int);
int main()
{
    int n, n1, n2;
    cin >> n;
    n2 = n/2;
    n1 = n - n2;
    while (true){
        if (!isprime(n1) && !isprime(n2))
            break;
        else{
            n1--;
            n2++;
        }
    }
    cout << n1 << " " << n2 << endl;
    return 0;
}
bool isprime(int n)
{
    bool res = true;
    int sq = sqrtl(n);
    for (int i = 2; i <= sq; i++)
        if (n % i == 0){
            res = false;
            break;
        }
    return res; 
}
#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(n%7==0)
            cout << n << endl;
        else{
            n /= 10;
            n *= 10;
            while (n%7 != 0)
                n++;
            cout << n << endl;
        }
    }
    return 0;
}
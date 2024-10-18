#include<iostream>
#include<algorithm>
using namespace std;
int gcd_(int, int);
int main()
{
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int a[n], b[n];
        int ta = 0, tb = 0, count = 0, num;
        for (int i = 0; i < n; i++){
            cin >> num;
            if(num % 2 == 0)
                b[tb++] = num;
            else
                a[ta++] = num;
        }
        for (int i = 0; i < ta; i++)
            b[tb++] = a[i]; 
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++)
                if(__gcd(b[i], 2 * b[j]) > 1)
                    count++;
        }
        cout << count << endl;
    }
    return 0;
}
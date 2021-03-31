#include <iostream>
using namespace std;
int main()
{
    int t, n, hlen;
    cin >>t ;
    for (size_t i = 0; i < t; i++){
        cin >> n;
        if (n % 4 != 0)
            cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            hlen = n/2;
            for (int i = 1; i <= hlen; i++)
                cout << i*2 << ' ';
            int count = 1;
            for (int i = 1; i < hlen; i++){
                cout << count << ' ';
                count += 2;
            }
            count += 2 * n/4;
            cout << count << endl;
        }
    }
    
    return 0;
}
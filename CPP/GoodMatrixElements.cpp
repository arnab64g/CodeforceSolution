#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            if(i == j || i == n-j-1 || i == n/2 || j == n/2)
                count += a[i][j];
        }
    cout << count << endl;
    return 0;
}
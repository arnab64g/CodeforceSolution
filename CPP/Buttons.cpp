#include <iostream>
using namespace std;
int main()
{
    int n, count;
    cin >> n;
    count = n;
    for (int i = 1; i < n; i++)
        count += (n - i) * i;

    cout << count << endl;
    return 0;
}
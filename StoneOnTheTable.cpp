#include <iostream>

using namespace std;

int main()
{
    char c[55];
    int n, count = 0;
    cin >> n;
    cin >> c;
    for (int i = 0; i < n-1; i++)
        if (c[i] == c[i+1])
            count++;
    cout << count;
    return 0;
}
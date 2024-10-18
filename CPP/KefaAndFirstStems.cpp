#include <iostream>
using namespace std;
int main()
{
    int n, a1, a2, count = 1, Max = 1;
    cin >> n;
    cin >> a1;
    for (int i = 1; i < n; i++)
    {
        cin >> a2;
        if (a2 < a1)
            count = 1;
        else count++;
        a1 = a2;
        if (count > Max)
            Max = count;
    }
    cout << Max << endl;
    return 0;
}
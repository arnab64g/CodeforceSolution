#include <iostream>
using namespace std;
int main()
{
    int w1, h1, w2, h2, count, mx;
    cin >> w1 >> h1 >> w2 >> h2;
    mx = (w1 > w2) ? w1 : w2;
    count = (h1+h2+2)*(mx+2);
    count -= (h1+h2) * mx;
    cout << count << endl;
    return 0;
}
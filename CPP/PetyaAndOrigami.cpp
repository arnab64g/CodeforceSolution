#include <iostream>
using namespace std;
int main()
{
    int n, k, r, g, b, count;
    cin >> n >> k;
    r = n*2;
    g = n*5;
    b = n*8;
    count = r/k;
    count += g/k;
    count += b/k;
    if(r%k)
        count++;
    if(g%k)
        count++;
    if(b%k)
        count++;
    cout << count << endl;
    return 0;
}
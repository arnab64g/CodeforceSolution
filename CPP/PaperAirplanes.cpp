#include <iostream>
using namespace std;
int main()
{
    int k, n, s, p, nos, nop;
    cin >> k >> n >> s >> p;
    nos = n/s;
    if(n%s)
        nos++;
    nos *= k;
    nop = nos / p;
    if(nos%p)
        nop++;
    cout << nop << endl;
    return 0;
}
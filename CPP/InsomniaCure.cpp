#include <iostream>
using namespace std;
int main()
{
    int k, l, m, n, d, count  = 0;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    bool dragon[d] = {false};
    
    for (int i = k-1; i < d; i += k)
        dragon[i] = true;
    for (int i = l-1; i < d; i += l)
        dragon[i] = true;
    for (int i = m-1; i < d; i += m)
        dragon[i] = true;
    for (int i = n-1; i < d; i += n)
        dragon[i] = true;
    for (int i = 0; i < d; i++)
        if(dragon[i])
            count++;
    cout << count << endl;
    return 0;
}
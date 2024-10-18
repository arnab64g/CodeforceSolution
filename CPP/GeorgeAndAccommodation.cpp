#include <iostream>
using namespace std;

int main()
{
    int n, p, q, count = 0, vac;
    cin >> n;
    while (n--)
    {
        cin >> p >> q;
        vac = q - p;
        if(vac >= 2)
            count++;
    }
    cout << count << endl;
    
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, d = 0;
    cin >> n;
    char st[n+1];
    cin >> st;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'A') a++;
        else if(st[i] == 'D') d++;
    }
    if(a > d)
        cout << "Anton" << endl;
    else if(a < d)
        cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, total = 0, count = 0, added = 0;
    int cn[110];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> cn[i];
        total += cn[i];
    }
    sort(cn, cn+n);
    n--;
    while (true){
        added += cn[n--];
        count++;
        if (added*2 > total)
            break;
    }
    cout << count << endl;
    return 0;
}
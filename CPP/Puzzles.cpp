#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, min,  diff;
    bool des;
    int a[51];
    cin >> n >> m;
    for(int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a+m);
    min = a[m-1] - a[0];
    for (int i = 0; i < m-n+1; i++){
        diff = a[i+n-1] - a[i];
        if(diff < min)
            min =diff;
    }
    cout << min << endl;
    return 0;
}
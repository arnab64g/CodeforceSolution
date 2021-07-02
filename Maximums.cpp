#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = 0;
    for (int i = 0; i < n; i++){
        if(a[i] < 0)
            cout << max + a[i] << " ";
        else{
            max += a[i];
            cout << max << " ";
        }
    }
    cout << endl;
    return 0;
}
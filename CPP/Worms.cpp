#include <iostream>
using namespace std;
int BinarySearch(int[], int, int, int);
int main()
{
    int n, m, a, count = 0;
    cin >> n;
    int labels[n+1];
    labels[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> a;
        count += a;
        labels[i] = count;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        cout << BinarySearch(labels, 1, n, a) << endl; 
    }
    return 0;
}
int BinarySearch(int a[], int i, int f, int v)
{
    int mid = (i+f)/2;
    if(v > a[mid - 1]  && v <= a[mid])
        return mid;
    if(v > a[mid])
        return BinarySearch(a, mid+1, f, v);
    else return BinarySearch(a, i, mid - 1, v);
}
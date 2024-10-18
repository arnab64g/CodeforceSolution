#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int ptr1 = 0, ptr2 = n - 1, count = 0;;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (ptr1 <= ptr2){
        if(a[ptr1] <= k){
            ptr1++;
            count++;
        }
        else if(a[ptr2] <= k){
            ptr2--;
            count++;
        }
        else break;
    }
    cout << count << endl;
    return 0;
}
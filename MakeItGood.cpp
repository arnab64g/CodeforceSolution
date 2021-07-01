#include <iostream>
using namespace std;
int main()
{
    int t, n, top, count;
    cin >> t;
    while (t--){
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        int count1=1; int i;
        for( i=n-1;i>=0;i--){
            if(a[i] <= a[i-1]) 
            count1++;
            else 
                break;
        }
        for(int j=i;j>=1;j--){
            if(a[j]>=a[j-1]&&j>0) count1++;
            else break;
        }
        cout<<n-count1<<endl;
    
    }
    return 0;
}
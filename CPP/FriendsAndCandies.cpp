#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t ;
    while ( t--){
        cin >> n;
        int a[n];
        int total = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i] ;
            total += a[i];
        }
        if(total % n)
            cout << "-1" << endl;
        else{
            int count = 0;
            int value = total/n;
            for (int i = 0; i < n; i++)
                if(a[i] > value)
                    count++;
            cout << count << endl;
        }   
    }
    return 0;
}
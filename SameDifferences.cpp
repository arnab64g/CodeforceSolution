#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t, n, value;
    cin >> t ;
    while(t--){
        cin >> n;
        long long count = 0;
        map<long long, long long> sd;
        for (int i = 0; i < n; i++){
            cin >> value;
            count += sd[value - i];
            sd[value - i]++;
        }
        cout << count << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, on;
        cin >> n;
        vector<int> v;
        while (n != 0){
            v.push_back(n%10);
            n /= 10;
        }
        int sz = v.size();
        on = 9*(sz-1);
        if (sz == 1)
            on += v[0];
        else{
            bool res = true;
            int num = v[sz-1];
            for (int i = sz-2; i >= 0; i--){
                if(v[i] > num)
                    break;
                else if(v[i] < num){
                    res = false;
                    break;
                }
            }
            if (res)
                on += num;
            else on += num-1;
        }
        cout << on << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, m;
    bool pos;
    vector<int> q;
    cin >> t;
    while(t--){
        cin >> n;
        pos = false;
        while (n != 0)
        {
            m = n%10;
            if(m%2 == 0)
                pos = true;
            q.push_back(m);
            n /= 10;
        }
        if(!pos)
            cout << -1 << endl;
        else{
            if(q[0] % 2 == 0)
                cout << 0 << endl;
            else if(q[q.size() - 1]%2 == 0)
                cout << 1 << endl;
            else cout << 2 << endl;
        }
        q.clear();
    }
    return 0;
}
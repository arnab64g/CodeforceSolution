#include<iostream>
#include<set>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[101];
        set<int> s;
        int val;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            s.insert(val);
        }
        if (s.size() == n)
        {
            cout << "Yes" << endl;
        }
        else{
            cout <<"No" << endl;
        }
    }
    return 0;
}
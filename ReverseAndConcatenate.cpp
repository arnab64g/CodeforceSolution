#include<iostream>
using namespace std;
int main()
{
    int t, n, k;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cin >> s;
        if(k == 0)
            cout << 1 << endl;
        else{
            int len = s.length();
            bool res = true;
            for (int i = 0; i < len/2; i++)
            {
                if(s[i] != s[len - 1 - i]){
                    res = false;
                    break;
                }
            }
            if(res)
                cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int t, l;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> l;
        cin >> s;
        l = s.length();
        for (int i = 0; i < l; i++)
        {
            if(s[i] == 'D')
                cout << 'U';
            else if(s[i] == 'U')
                cout << 'D';
            else cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
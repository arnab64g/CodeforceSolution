#include <iostream>
using namespace std;
void polycrap(int, string);
int main()
{
    int t;
    cin >> t;
    while (t--){
        string s;
        int n;
        cin >> n;
        cin >> s;
        polycrap(n, s);
    }
    return 0;
}
void polycrap(int n, string s)
{
    if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
        cout << "YES" << endl;
    else if (s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0')
        cout << "YES" << endl;
    else{
        if (s[0] == '2' && s[n-1] == '0'){
            if (s[1] == '0' && s[n-2] == '2')
                cout << "YES" << endl;
            else if (s[1] == '0' && s[2] == '2')   
                cout << "YES" << endl;
            else if (s[n-3] == '0' && s[n-2] == '2')
                cout << "YES" << endl;   
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }   
}

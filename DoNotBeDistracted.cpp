#include <iostream>
#include <string>
using namespace std;
void result(int, string);
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        result(n, s);
    }
    return 0;
}
void result(int n, string s)
{
    bool al[26] = {false};
    bool res = true;
    char v = s[0];
    for(int i = 0; i < n; i++){
        if (al[s[i]-'A']){
            res = false;
            break;
        }
        if(v != s[i]){
            al[v-'A'] = true;
            v = s[i];   
        }
    }
    if (res)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}
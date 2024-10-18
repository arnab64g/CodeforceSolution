#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        string res = "";
        cin >> n;
        cin >> s;
        res += '1';
        int tmp1, tmp2;
        for (int i = 1; i < n; i++){
            if (res[i-1] == '1' && s[i-1] == '1'){
                if (s[i] == '1')
                    res += '0';
                else res += '1';
            }
            else if (res[i-1] == '1' || s[i-1] == '1'){
                if (s[i] == '1')
                    res += '1';
                else res += '0';
            }
            else if (res[i-1] == '0' && s[i-1] == '0')
                res += '1';
        }
        cout << res <<endl;  
    }
    return 0;
}
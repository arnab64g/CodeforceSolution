#include <iostream>
using namespace std;
int main()
{
    string s;
    int n, t, len, b[50], top = 0;
    cin >> n >> t;
    cin >> s;
    len = s.length();
    for (int i = 0; i < len; i++)
        if (s[i] == 'B')
            b[top++] = i;
    while (t--){
        for (int i = 0; i < top; i++){
            if (b[i] != len-1){
                if (s[b[i]+1] == 'G'){
                    s[b[i]] = 'G';
                    s[b[i]+1] = 'B';
                    b[i]++;
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}

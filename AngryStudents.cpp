#include <iostream>
using namespace std;
int main()
{
    int t, n, count;
    string s;
    bool res;
    cin >> t;
    while (t--){
        cin >> n;
        cin >> s;
        count = 0;
        while (true){
            res = false;
            for (int i = 0; i < n - 1; i++)
                if(s[i] == 'A' && s[i+1] == 'P'){
                    res = true;
                    s[i+1] = 'A';
                    i++;
                }
            if (res)
                count++;
            else break;
        }
        cout << count << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int t;
    string s;
    bool r, g, b, ans;
    cin >> t;
    while(t--){
        cin >> s ;
        ans = true;
        r = false;
        g = false;
        b = false;
        for(int i = 0; i < 6 ; i++){
            switch(s[i]){
                case 'r':
                    r = true;
                    break;
                case 'g':
                    g = true;
                    break;
                case 'b':
                    b = true;
                    break;
                case 'R':
                    if(!r)
                        ans = false;
                    break;
                case 'G':
                    if(!g)
                        ans = false;
                    break;
                case 'B':
                    if(!b)
                        ans = false;
                    break;
            }
            if(!ans)
                break;
        }
        if(ans)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
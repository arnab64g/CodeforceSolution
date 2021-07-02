#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int maxstp =- 1, step = 0;
        int len=s.length();
        for(int i = 0; i < len; i++){
            if(s[i]=='L')
                step++;
            else{
                maxstp = max(maxstp, step);
                step = 0;
            }
        }
        maxstp = max(maxstp, step);
        if(maxstp == -1)
            maxstp = len;
        cout << maxstp + 1 << endl;
    }
    return 0;
}


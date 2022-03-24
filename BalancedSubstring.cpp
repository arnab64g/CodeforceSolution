#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool res = false;
        for(int i = 0; i < n -1; i++){
            if(s[i] != s[i+1]){
                cout << i+1 << " " << i+2 << endl;
                res = true;
                break;
            }
        }
        if(!res)
            cout << "-1 -1" << endl;
    }
    return 0;
}
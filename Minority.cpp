#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int zeros = 0;
        int ones = 0;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == '0')
                zeros++;
            else ones++;
        }
        if(ones  < zeros)
            cout << ones << endl;
        else if(zeros < ones)
            cout << zeros << endl;
        else cout << zeros - 1 << endl;
    }
    return 0;
}
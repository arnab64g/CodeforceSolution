#include <iostream>
using namespace std;

int main()
{
    string s;
    int count = 1;
    cin >> s;
    int len = s.length();
    for (int i = 1; i < len; i++){
        
        
        if(s[i] == s[i-1])
            count++;
        else count = 1;
        if (count == 7)
            break;
    }
    if (count > 6)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    int l1, l2;
    cin >> s1 >> s2;
    l1 = s1.length();
    l2 = s2.length();
    bool result = true;
    for (int i = 0; i < l1; i++){
        l2--;
        if (s1[i] != s2[l2]){
            result = false;
            break;
        }
    }
    if (result)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    
    
    return 0;
}
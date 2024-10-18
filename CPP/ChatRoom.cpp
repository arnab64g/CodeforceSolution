#include <iostream>
using namespace std;
int main()
{
    string s1 = "hello";
    string s2;
    cin >> s2;
    int n = 0;
    int len = s2.length();
    for (int i = 0; i < len; i++)
        if (s1[n] == s2[i])
            n++;  
    if(n==5)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
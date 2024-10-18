#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = len - 1; i >= 0; i--)
        s += s[i];
    cout << s << endl;
    return 0;
}
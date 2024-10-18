#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st;
    cin >> st;
    int a[26] = {0};
    int count = 0;
    for (int i = 0; i < st.length(); i++)
        st[i] = toupper(st[i]);
    for (int i = 0; i < st.length(); i++)
        a[st[i] - 'A']++;
    for (int i = 0; i < 26; i++)
        if (a[i] != 0)
            count++;
    if (count%2 == 1)
        cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
    return 0;
}
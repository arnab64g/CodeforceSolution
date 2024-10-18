#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string st1, st2;
    int len;
    vector<char> st;
    cin >> st1 >> st2;
    len = st1.length();
    for (int i = 0; i < len; i++)
    {
        if (st1[i] == st2[i])
            st.push_back('0');
        else st.push_back('1');
    }
    for (char ch: st)
        cout << ch;
    cout << endl;
    return 0;
}
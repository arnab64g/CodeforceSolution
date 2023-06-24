#include <iostream>
using namespace std;

int main(){
    int t;
    string s;
    string con = "codeforces";
    cin >> t;
    while (t--)
    {
        int diff = 0;
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != con[i])
            {
                diff++;
            }
        }
        cout << diff << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        string s[9];
        for (int i = 0; i < 9; i++){
            cin >> s[i];
            for (int j = 0; j < 9; j++)
                if(s[i][j] == '4')
                    s[i][j] = '5';
        }
        for (int i = 0; i < 9; i++)
            cout << s[i] << endl;
    }
    return 0;
}
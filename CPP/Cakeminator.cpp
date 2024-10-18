#include <iostream>
using namespace std;
int main()
{
    int r, c, count = 0;
    bool acp;
    cin >> r >> c;
    string s[r];
    for (int i = 0; i < r; i++)
        cin >> s[i];
    for (int i = 0; i < r; i++){
        acp = true;
        for (int j = 0; j < c; j++)
            if (s[i][j] == 'S'){
                acp = false;
                break;
            }
        if (acp)
            for (int j = 0; j < c; j++){
                    s[i][j] = '*';
                    count++;
            }
    }
    for (int i = 0; i < c; i++){
        acp = true;
        for (int j = 0; j < r; j++)
            if (s[j][i] == 'S'){
                acp = false;
                break;
            }
        if (acp)
            for (int j = 0; j < r; j++)
                    if (s[j][i] == '.')
                        count++;
    }
    cout << count << endl;
    return 0;
}
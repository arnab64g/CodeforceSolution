#include <iostream>
using namespace std;
int main()
{
    char seat[1005][6];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> seat[i];
    bool res = false;
    for (int i = 0; i < n; i++){
        if (seat[i][0] == 'O' && seat[i][1] == 'O'){
            seat[i][0] = '+';
            seat[i][1] = '+';
            res = true;
            break;
        }
        else if (seat[i][3] == 'O' && seat[i][4] == 'O'){
            seat[i][3] = '+';
            seat[i][4] = '+';
            res = true;
            break;
        }
    }
    if (res){
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << seat[i] << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
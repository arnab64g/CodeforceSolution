#include<iostream>
using namespace std;
struct PlayClear{
    int play;
    int clear;
};
int main()
{
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        PlayClear pc[n];
        for (int i = 0; i < n; i++)
            cin >> pc[i].play >> pc[i].clear;
        if(pc[0].clear > pc[0].play){
            cout << "NO" << endl;
            continue;
        }
        bool res = true;
        for (int i = 1; i < n; i++){
            if(pc[i].play < pc[i - 1].play || pc[i].clear < pc[i - 1].clear){
                res = false;
                break;
            }
            else if ((pc[i].play - pc[i - 1].play) < (pc[i].clear - pc[i - 1].clear))
            {
                res = false;
                break;
            }
        }
        if(res)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
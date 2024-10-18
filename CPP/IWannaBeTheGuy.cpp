#include <iostream>
using namespace std;
int main()
{
    int n;
    int x, lv;
    bool wn[100] = {false};
    bool res = true;
    cin >> n;
    cin >> x;
    for (int i = 0; i < x; i++){
        cin >>lv;
        wn[lv - 1] = true;
    }
    cin >> x;
    for (int i = 0; i < x; i++){
        cin >>lv;
        wn[lv - 1] = true;
    }
    for (int i = 0; i < n; i++)
        if (!wn[i]){
            res = false;
            break;
        }
    if (res)
        cout << "I become the guy." << endl;
    else cout <<  "Oh, my keyboard!" << endl;
    
    
    return 0;
}
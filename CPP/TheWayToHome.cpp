#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    string s;
    bool res = true;
    cin >> n >> k;
    cin >> s;
    int step = 0;
    while (true){
        if(step == n - 1)
            break;
        else if(step + k >= n - 1){
            count++;
            break;
        }
        else{
            res = false;
            int temp = step;
            for (int j = temp+1; j <= temp+k; j++)
                if (s[j] == '1'){
                    res = true;
                    step = j;
                }
        if (!res)
            break;
        else count++;
        }
    }
    if (res)
        cout << count << endl;
    else cout << "-1" <<endl;
    return 0;
}
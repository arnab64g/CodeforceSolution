#include <iostream>
using namespace std;
void crdfind(string[], int);
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string rt[n];
        for (int i = 0; i < n; i++)
            cin >> rt[i];
        crdfind(rt, n);
        for (int i = 0; i < n; i++)
            cout << rt[i] << endl;
    }
    return 0;
}
void crdfind(string rt[], int n)
{
    int x1, y1, x2, y2;
    bool res1 = false, res2 = false;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (rt[i][j] == '*'){
                if (!res1){
                    x1 = j;
                    y1 = i;
                    res1 = true;
                }
                else{
                    x2 = j;
                    y2 = i;
                    res2 = true;
                    break;
                }
            }
        }
        if(res2)
            break;
    }
    if (x1 != x2 && y1 != y2){
        rt[y1][x2] = '*';
        rt[y2][x1] = '*';
    }
    else if (x1 == x2){
        if (x1 < n/2){
            rt[y1][x1+1] = '*';
            rt[y2][x2+1] = '*';
        }
        else{
            rt[y1][x1-1] = '*';
            rt[y2][x2-1] = '*';
        }
    }
    else{
        if (y1 < n/2){
            rt[y1+1][x1] = '*';
            rt[y2+1][x2] = '*';
        }
        else{
            rt[y2-1][x1] = '*';
            rt[y2-1][x2] = '*';
        }
    }
}
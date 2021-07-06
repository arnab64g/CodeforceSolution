#include<iostream>
using namespace std;
struct LongJump{
    int node;
    int sum;
};
int sumOf(LongJump[], int, int);
int main()
{
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        LongJump lj[n];
        for (int i = 0; i < n; i++){
            cin >> lj[i].node;
            lj[i].sum = 0;
        }
        for (int i = 0; i < n; i++)
            lj[i].sum = lj[i].node + sumOf(lj, i + lj[i].node, n);
        int max = lj[0].sum;
        for (int i = 1; i < n; i++){
            if(lj[i].sum > max){
                max = lj[i].sum;
            }
        }
        cout << max << endl;
    }
    return 0;
}
int sumOf(LongJump lj[], int x, int n)
{
    if(x >= n)
        return 0;
    if(lj[x].sum != 0)
        return lj[x].sum;
    else if(x + lj[x].node >= n){
        lj[x].sum = lj[x].node;
        return lj[x].sum;
    }
    else if(x + lj[x].node < n) {
        lj[x].sum = lj[x].node + sumOf(lj, x + lj[x].node, n);
        return lj[x].sum;
    }
    else return 0;
}
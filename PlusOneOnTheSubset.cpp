#include<iostream>
using namespace std;
int main()
{
    int t, n, ai;
    cin >> t;
    while (t--){
        cin >> n;
        int max = 0, min = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            if(ai > max)
                max = ai;
            if(ai < min)
                min = ai;
        }
        cout << max - min << endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t, l, count, score;
    string s;
    cin >> t;
    while (t--){
        cin >> s;
        l = s.length();
        vector<int> v;
        count = 0;
        for (int i = 0; i < l; i++){
            if(s[i] == '1')
                count++;
            else{
                if(count != 0)
                    v.push_back(count);
                count = 0;
            }
        }
        if(s[l-1] == '1')
            v.push_back(count);
        sort(v.begin(), v.end(), greater<int>());
        score = 0;
        for (int i = 0; i < v.size(); i++)
            if (i % 2 == 0)
                score += v[i];
        cout << score << endl;
    }
    return 0;
}
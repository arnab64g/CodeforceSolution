#include <iostream>
using namespace std;
int lcm_(int, int);
int main()
{
    int t;
    cin >> t;
    while (t--){
        string s1, s2, u = "", v = "";
        cin >> s1 >> s2;
        int l1, l2, l;
        l1 = s1.length();
        l2 = s2.length();
        l = lcm_(l1, l2);
        for (int i = 0; i < l/l1; i++)
            u += s1;
        for (int i = 0; i < l/l2; i++)
            v += s2;
        if(u == v)
            cout << u << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
int lcm_(int m, int n)
{
    int n1 = m, n2 = n;
    while (n1 != n2){
        if(n1 > n2)
            n2 += n;
        else n1 += m;
    }
    return n1;
}
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >>s;
        int len = s.length();
        int a = 0, b=0,c=0;
        for (int i = 0; i < len; i++){
            switch (s[i]){
                case 'A':
                    a++;
                    break;
                case 'B':
                    b++;
                    break;
                case 'C':
                    c++;
                    break;
            }
        }
        if(a+c == b)
            cout <<"YES" << endl;
        else cout << "NO" << endl;    
    }
    return 0;
}
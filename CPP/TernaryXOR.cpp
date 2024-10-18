#include <iostream>
using namespace std;
int main()
{
    int t, n;
    string s, a, b;
    cin >> t;
    while (t--){
        cin >> n;
        cin >> s;
        a = "1";
        b = "1";
        for (int i = 1; i < n; i++){
            if(s[i] == '2'){
                if(a == b){
                    a += '1';
                    b += '1';
                }
                else if(a < b){
                    a += '2';
                    b += '0';
                }
                else {
                    a += '0';
                    b += '2';
                }
            }
            else if(s[i] == '1'){
                if(a <= b){
                    a += '1';
                    b += '0';
                }
                else {
                    a += '0';
                    b += '1';
                }
            }
            else{
                a += '0';
                b += '0';
            }
        }
        cout << a << endl << b << endl;
    }
    return 0;
}
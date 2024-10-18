#include <iostream> 
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        if(n > 45)
            cout << "-1" << endl;
        else{
            int max = 9;
            string s = "";
            if(n == 0)
                s = "0";
            while (n != 0){
                if(n >= max){
                    s = to_string(max) + s;
                    n -= max;
                    max--;
                }
                else {
                    s = to_string(n) + s;
                    n = 0;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}

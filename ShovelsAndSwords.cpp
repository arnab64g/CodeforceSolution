#include <iostream>
using namespace std;
int main()
{
    int t, s, d, temp, count;
    cin >> t;
    while (t--){
        cin >> s >> d;
        if(d > s){
            temp = s;
            s = d;
            d = temp;
        }
        if(d * 2 <= s)
            cout << d << endl;
        else{
            count = s - d;
            d -= count;
            count += (d * 2) / 3;   
            cout << count << endl;
        }
    }
    return 0;
}
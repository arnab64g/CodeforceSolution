#include <iostream>
using namespace std;
int main()
{
    int n, evnt, p = 0, c = 0;
    cin >> n;
    while (n--){
        cin >> evnt;
        if (evnt > 0)
            p += evnt;
        else{ 
            if (p < -evnt){
                c += (-evnt - p);
                p = 0;
            }
            else
                p += evnt;
        }
    }
    cout << c << endl;
    return 0;
}
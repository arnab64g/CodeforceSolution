#include <iostream>
using namespace std;
int main()
{
    long long ldig = 1, n = 1378, p;
    cin >> p;
    switch (p%4){
        case 1:
            ldig = 8;
            break;
        case 2:
            ldig = 4;
            break;
        case 3:
            ldig = 2;
            break;
        case 0:
            ldig = 6;
            break;
    }
    if(p == 0)
        ldig = 1;
    cout << ldig << endl;
    return 0;
}
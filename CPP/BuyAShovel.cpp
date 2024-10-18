#include <iostream>
using namespace std;
int main()
{
    int k, r, count = 0, cost1, cost2;
    cin >> k >> r;
    for (int i = 1; i < 10; i++){
        cost1 = i*k;
        cost2 = i*k-r;
        if (cost1%10 == 0 || cost2%10 == 0){
            count = i;
            break;
        }
    }
    cout << count << endl;
    return 0;
}
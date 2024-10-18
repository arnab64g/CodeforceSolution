#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, drk, total = 0;
    double value;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> drk;
        total += drk;
    }
    value = (double)total/n;
    cout << setprecision(12) << value << endl;
    return 0;
}
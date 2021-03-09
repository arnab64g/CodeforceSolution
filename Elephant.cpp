#include <iostream>
using namespace std;

int main()
{
    int x, st;
    cin >> x;
    st = x/5;
    if (x%5 != 0)
        st++;
    cout << st << endl;
}
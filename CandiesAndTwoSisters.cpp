#include <iostream>
using namespace std;

int main()
{
    int n, candy, distr;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> candy;
        if (candy%2== 1 )
            distr  = candy / 2;
        else distr = candy / 2 - 1;
        cout << distr << endl;
    }
    
    return 0;
}
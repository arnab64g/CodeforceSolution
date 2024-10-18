#include <iostream>
using namespace std;

int main()
{
    long long int n, evenN, oddN, value;
    cin >> n;
    if (n%2 == 0)
    {
        n /= 2;
        evenN = n*(n+1);
        oddN = n*(n+1) - n;
        
    }
    else{
        n++;
        n /= 2;
        evenN = n*(n+1);
        oddN = n*(n+1) + n;
    }
    value = evenN - oddN;
    cout << value << endl;
    return 0;
}
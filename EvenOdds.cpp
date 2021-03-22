#include <iostream>
using namespace std;
int main()
{
    long long int n, k, value;
    cin >> n >> k;
    if (k <= (n+1)/2){
        value = (k-1)*2+1;
    }
    else{
        k = k -(n+1)/2;
        value = k*2;
    }
    cout << value;
    
}
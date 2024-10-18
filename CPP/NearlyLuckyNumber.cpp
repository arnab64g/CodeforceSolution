#include <iostream>
using namespace std;

int main()
{
    long long unsigned n;
    int modl, count =0;;
    bool result = true;
    cin>> n;
    while (n != 0)
    {
        modl = n%10;
        if (modl == 4 || modl == 7)
            count++;
        n/= 10;
    }
    if(count != 4 && count != 7)
        result = false;
    if (result)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    
    
    return 0;
}
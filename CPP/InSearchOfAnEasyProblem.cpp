#include <iostream>
using namespace std;
int main()
{
    int n;
    int a;
    cin >> n ;  
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
            ans = false;
    }
    if(ans)
        cout << "EASY" << endl;
    else cout << "HARD" << endl;
    
    return 0;
}
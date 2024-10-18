#include <iostream>

using namespace std;
int main()
{
    string a, b;
    cin >> a ;
    cin >> b;
    for (int i = 0; i < a.length(); i++)
        a[i] = towupper(a[i]);        
    for (int i = 0; i < b.length(); i++)
        b[i] = towupper(b[i]);        
    if (a < b)
        cout << "-1";
    else if(a > b)
        cout << "1";
    else cout << "0";
    
    return 0;
}
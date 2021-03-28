#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n, count;
    string s;
    
    map <string, int> hsh;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (hsh.count(s) == 0)
        {
            cout<< "OK" << endl;
            hsh[s] = 1;
        }
        else{
            cout << s << hsh[s] << endl;
            hsh[s]++;
        }
        
    }
    
    
    return 0;
}

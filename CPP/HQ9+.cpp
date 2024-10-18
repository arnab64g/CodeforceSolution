#include <iostream>
using namespace std;

int main()
{
    char ch;
    string s;
    int len;
    bool result = false;
    cin >> s ;
    len = s.length();
    for (int i = 0; i < len; i++)
    {
        ch = (char) s[i];
        switch (ch)
        {
        case 'H':
        case 'Q':
        case '9':
      
            result = true;
            break;
        }
    
    }
    
        
    if (result)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    
    
    return 0;
}
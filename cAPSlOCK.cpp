#include <iostream>

using namespace std;
int main()
{
    string s;
    bool res = false;
    cin >> s;
    for (int i = 1; i < s.length(); i++)
        if (islower(s[i])){
            res = true;
            break;
        }
    
    
    if (!res){
        for (int i = 0; i < s.length(); i++){
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}
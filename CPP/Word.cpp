#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.length(), count = 0;
    while (l--){
        if(isupper(s[l]))
            count++;
    }
    if (count * 2 > s.length()){
        for (int i = 0; i < s.length(); i++)
            cout << (char)toupper(s[i]);
    }
    else{
        for (int i = 0; i < s.length(); i++)
            cout << (char)tolower(s[i]);
    }
    return 0;
}

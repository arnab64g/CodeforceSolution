#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector <char> v;
    char ch;
    int len = s.length();
    for (int i = 0; i < len; i++){
        ch = tolower(s[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y')
            v.push_back(ch);
    }
    for (char c:v){
        cout << '.' << c;
    }
    cout << endl;
    
    return 0;
}
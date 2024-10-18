#include <iostream>
using namespace std;
int main()
{
    string lines;
    int len, count = 0;
    bool letters[26] = {false};
    getline(cin, lines);
    len = lines.length();
    for (int i = 0; i < len; i++){
        if (lines[i] >= 'a' && lines[i] <= 'z')
            letters[lines[i] - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
        if (letters[i])
            count++;
    cout << count << endl;
    return 0;
}
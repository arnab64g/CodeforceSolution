#include <iostream>
using namespace std;
int main()
{
    string lang, opstr = "";
    int len;
    cin >> lang;
    len = lang.size();
    for (int i = 0; i < len;){
        if (i < len - 2){
            if (lang[i] == 'W' && lang[i+1] == 'U' && lang[i+2] == 'B' ){
            i += 3;
                if (i != 0){
                    if (opstr[opstr.size()-1] >= 'A' && opstr[opstr.size()-1] <= 'Z')
                        opstr += ' ';
                }
            }
            else{
                opstr += lang[i];
                i++;
            }
        }
        else opstr += lang[i++];
    }
    cout << opstr << endl;   
    return 0;
}
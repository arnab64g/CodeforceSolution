#include <iostream>

using namespace std;

int main()
{
    int n, count, md;
    cin >> n;
    int ln[10] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477};
    bool result = true;
    count = n;
    while (n != 0)
    {
        md = n%10;
        if (md == 4 || md ==  7)
            n /= 10;
        else {
            result = false;
            break;
        }
    }
    if (result)
        cout << "YES" << endl;
    else {
        for (int i = 0; i <10; i++)
        {
            if (count%ln[i] == 0)
            {
                result = true;
                break;
            }
            
        }
        if (result)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    
    return 0;
}
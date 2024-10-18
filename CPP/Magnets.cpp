#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, count = 1;
    char ch1[3], ch2[3];
    cin >> n;
    cin >> ch1;
    for (int i = 1; i < n; i++)
    {
        cin >> ch2;
        if (strcmp(ch1, ch2) != 0)
            count++;
        strcpy(ch1, ch2);
        
    }
    cout <<  count << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, Max;
    int value[5];
    cin >> a >> b >> c ;
    value[0] = a+b*c;
    value[1] = a * (b+c);
    value[2] = a*b*c;
    value[3] = (a+b) *c;
    value[4] = a+b+c;
    Max = value[0];
    for (int i = 1; i < 5; i++)
        if (value[i] > Max)
            Max = value[i];
    cout << Max << endl;
    
    return 0; 
}
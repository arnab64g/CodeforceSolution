#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n;
    a = n/3;
    b = n/3;
    c = n - a - b;
    if (a % 3 == 0){
        a++;
        b--;
    }
    if(c % 3 == 0){
        if(a % 3 == 2){
            a--;
            c++;
        }
        else{
            a++;
            c--;
        }
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, temp, d1, d2, dst;
    cin >> a >> b >> c >> d;
    if(a > b){
        temp = b;
        b = a;
        a = temp;
    }
    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }
    if(a > b){
        temp = b;
        b = a;
        a = temp;
    }
    d1 = b - a;
    if(d1 < d){
        dst = d - d1;
        b += dst;
    }
    else dst = 0;
    d1 = dst;
    d2 = c - b;
    if(d2 < d)
        dst = d - d2;
    else dst = 0;
    d2 = dst;
    dst = (d1 > d2) ? d1 : d2;
    cout << dst << endl;
    return 0;
}
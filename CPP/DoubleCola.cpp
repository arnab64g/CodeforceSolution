#include<iostream>
using namespace std;
int main()
{
    int n, d, pn, mult = 1;
    cin >> n;
    string name[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    while( n >= 0){
        pn = n;
        n -= 5*mult;
        mult *= 2;
    }
    if(pn == 0){
        cout << name[4] << endl;
        return 0;
    }
    mult /= 2;
    int count  = 0;
    while (pn > 0){
        pn -= mult;
        count++;
    }
    
    cout << name[count - 1] <<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n, a, exc25 = 0, exc50 = 0, exc100 = 0;
    bool res = true;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if(a == 25)
            exc25++;
        else if(a == 50){
            if(exc25 > 0){
                exc25--;
                exc50++;
            }
            else res = false;
        }
        else{
            if(exc25 > 0 && exc50 > 0){
                exc25--;
                exc50--;
                exc100++;
            }
            else if(exc50 == 0 && exc25 > 2){
                exc25 -= 3;
                exc100++;
            }
            else res = false;
        }
    }
    if(res)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
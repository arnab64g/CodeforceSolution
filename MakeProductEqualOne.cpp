#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, neg = 0, count0 = 0, value;
    long long count = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> value;
        if(value == 1)
            continue;
        if(value == 0){
            count++;
            count0++;
        }
        else if(value > 0)
            count += value - 1;
        else{
            neg++;
            count += abs(value) - 1;
        }
    }
    if(neg % 2 == 1 && count0 == 0) 
        count += 2;
    cout << count << endl;
    return 0;
}
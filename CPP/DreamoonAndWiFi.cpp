#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    string s1, s2;
    int distance1 = 0, distance2 = 0, que = 0;
    cin >> s1 >> s2;
    int l1 = s1.length();
    for (int i = 0; i < l1; i++){
        if(s1[i] == '+')
            distance1++;
        else distance1--;
        if(s2[i] == '+')
            distance2++;
        else if(s2[i] == '-') 
            distance2--;
        else que++;
    }
    cout.precision(12);
    if(que == 0){
        double prob;
        if(distance1 == distance2)
            prob = 1;
        else
            prob = 0;
        cout  << fixed << prob << endl;
        return 0;
    }
    double prob = 0.0;
    int sum = pow(2, que);
    int possibility = 0;
    for (int i = 0; i < sum; i++){
        int b = i;
        int temp = 0;
        for (int j = 0; j < que; j++){
            if(b % 2 == 1)
                temp++;
            else
                temp--;
            b /= 2;
        }
        if(distance1 + temp == distance2)
            possibility++;
    }
    prob = (double) possibility / sum;
    cout << fixed << prob << endl;
    return 0;
}

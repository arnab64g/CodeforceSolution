#include<iostream>
using namespace std;
struct DuffAndMeat
{
    int a;
    int p;
};
int main()
{
    int n, suma, cost = 0;
    cin >> n;
    DuffAndMeat dm[n];
    for (int i = 0; i < n; i++)
        cin >> dm[i].a >> dm[i].p;
    int day = 0, costper;
    while (day < n){
        costper = dm[day].p;
        suma = 0;
        while (costper <= dm[day].p){
            suma += dm[day++].a;
            if(day == n)
                break;
        }
        cost += suma * costper;
    }
    cout << cost << endl;
    return 0;
}
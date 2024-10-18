#include <iostream>
#include <algorithm>
using namespace std;
bool is_distinct(int);
int main()
{
    int year;
    bool ans;
    cin >> year;
    year = year+1;
    while (year <= 9100){
        ans = is_distinct(year);
        if (ans){
            cout << year << endl;
            break;
        }
        else year++;
    }  
}
bool is_distinct(int year)
{
    bool ans = true;
    int a[4], top = -1;
    while (year != 0)
    {
        a[++top] = year%10;
        year /=10;
    }
    sort(a, a+4);
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++){
            if(a[j] == a[i]){
                ans = false;
                break;
            }
        }
        if (ans == false)
            break;
    }
    return ans;
}
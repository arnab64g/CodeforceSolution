#include <iostream>
using namespace std;
bool isPossible(int, int);
void theNumbers(int, int);
int main()
{
    int len, sum;
    cin >> len >> sum;
    if (!isPossible(len, sum))
        cout << "-1 -1" << endl;
    else theNumbers(len, sum);
    return 0;
}
bool isPossible(int l, int s)
{
    if(l == 0)
        return false;
    if(s == 0 && l != 1)
        return false;
    else if(s > 9*l)
        return false;
    else return true;
}
void theNumbers(int l, int s)
{
    int temp = s;
    int max[l] = {0}, min[l] = {0};
    for (int i = 0; i < l; i++){
        if(s > 9){
            max[i] = 9;
            s -= 9;
        }
        else{ 
            max[i] = s;
            break;
        }
    }
    s = temp;
    for (int i = l-1; i >= 0; i--){
        if(s > 9){
            min[i] = 9;
            s -= 9;
        }
        else{ 
            min[i] = s;
            min[i]--;
            min[0]++;
            break;
        }
    }
    for (int i = 0; i < l; i++)
        cout << min[i];
    cout << " ";
    for (int i = 0; i < l; i++)
        cout << max[i];
}
#include <iostream>
using namespace std;
void pressNumber(int, int, int);
int main()
{
    int n, m, prs = 0;
    cin >> n >> m;
    pressNumber(n, m, prs);
    return 0;
}
void pressNumber(int n, int m, int p)
{
    int count = 0;
    while (m != n){
        if(m < n){
            
            m++;
        }
        else{
            if (m % 2 == 0)
                m /= 2;
            else m++;
        }
        count++;
    }
    cout << count << endl;       
}
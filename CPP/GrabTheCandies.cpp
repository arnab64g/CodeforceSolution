#include<iostream>

using namespace std;

int main()
{
    int t, n, ai;
    
    cin >> t;
    
    while (t--)
    {
        int odd = 0, even = 0;
        
        cin >> n;
        
        while (n--)
        {
            cin >> ai;
        
            if (ai % 2 == 0)
            {
                even += ai;
            }
            else{
                odd += ai;
            }
        }

        if(even > odd)
        {
            cout<<"YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
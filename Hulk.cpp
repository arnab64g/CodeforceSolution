#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    while (true){
        
        switch (i%2){
            case 0:
                cout << "I hate ";
                break;
            case 1:
                cout << "I love ";
                break;
        }
        i++;
        if (i == n)
            break;
        cout << "that ";
    }
    cout <<"it" << endl;
    return 0;
}
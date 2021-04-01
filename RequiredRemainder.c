#include <stdio.h>
int main()
{
    int x, y, n, t, div, k;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d %d", &x, &y, &n);
        k = n/x;
        k *= x;
        k += y;
        if (k > n)
            k -= x;
        printf("%d\n", k);
    }
    return 0;
}
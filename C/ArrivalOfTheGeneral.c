#include <stdio.h>
int main()
{
    int n, i, max, min, maxpos, minpos, swap;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[n-1];
    maxpos = n - 1;
    min = a[0];
    minpos = 0;
    for ( i = 1; i < n; i++){
        if (a[n-i - 1] >= max){
            max = a[n - i - 1];
            maxpos = n - i - 1;
        }
        if (a[i] <= min){
            min = a[i];
            minpos = i;
        }
    }
    
    swap = maxpos + (n - 1 - minpos);
    if (maxpos > minpos)
        swap--;
    
    printf("%d\n", swap);
    return 0;
}
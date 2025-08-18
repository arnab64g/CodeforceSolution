#include <stdio.h>
int main()
{
    int t, n, a[5], dig, value, i, j, count = 0;
    int len; 
    
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        len = 0;
    
        while (n != 0){
            a[len++] = n%10;
            n /= 10;
        }
    
        count = 0;
    
        for (i = 0; i < len; i++){
            if(a[i] != 0){
                count++;
    
                for ( j = 0; j < i; j++)
                    a[i] *= 10;
            }
        }
    
        printf("%d\n", count);
    
        for(i = 0; i < len; i++)
            if (a[i] != 0)
                printf("%d ", a[i]);
    
            printf("\n");
    }
    
    return 0;
}
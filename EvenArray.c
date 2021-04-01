#include <stdio.h>

int main()
{
    int t, n, a[42], i, edis, odis;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        edis = 0;
        odis = 0;
        for ( i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for ( i = 0; i < n; i++)
        {
           
            if (i%2 == 1 && a[i]%2 != 1)
                edis++;
            if (i%2 == 0 && a[i]%2 != 0)
                odis++;
        }
     
        if (edis == odis)
            printf("%d\n", edis);
        else printf("-1\n");
        
        
    }
    
    return 0;
}

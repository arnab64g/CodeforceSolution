#include <stdio.h>
int main()
{
    int t, n, a, oc, ec, i;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        oc = 0;
        ec = 0;
        for ( i = 0; i < n; i++){
            scanf("%d", &a);
            if (a%2 == 0)
                ec++;
            else oc++;
            
        }
        if(oc == 0)
            printf("NO\n");

        else if (oc % 2 != 0)
            printf("YES\n");
        else{
            if (ec == 0)
                printf("NO\n");
            else printf("YES\n");
        }
    }
    return 0;
}
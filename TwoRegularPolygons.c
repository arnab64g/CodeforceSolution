#include <stdio.h>
int main()
{
    int t, n, m;
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        scanf("%d", &m);
        if(n%m == 0)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
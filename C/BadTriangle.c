#include <stdio.h>
int main()
{
    int t, n, i, a[50005];
    int min, max, mxv, mnv , ang2, y;
    int flag = 0;
    scanf("%d", &t);

    while (t--){
        flag = 0;
        scanf("%d", &n);
    
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
    
        min = 0;
        max = 0;
        mxv = a[0];
        mnv = a[0];

        for (i = 1; i < n; i++){
            if(a[i] > mxv){
                mxv = a[i];
                max = i;
            }

            if (a[i] < mnv){
                mnv = a[i];
                min = i;
            }
        }

        for (i = 0; i < n; i++){
            ang2 = a[i] + a[min];

            if (i != min && ang2 <= mxv){
                y = i;
                flag = 1;
                break;
            }
        }

        if (flag != 0)
            printf("%d %d %d\n", min+1, y+1, max+1);
        else printf("-1\n");   
    }

    return 0;
}
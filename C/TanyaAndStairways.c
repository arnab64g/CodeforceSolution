#include <stdio.h>
int main()
{
    int n, prev, count = 0, elem = 0;
    int a[1005];
    int b[105];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    prev = a[0];
    
    for (int i = 1; i < n; i++){
        if(a[i] <= prev){
            count++;
            b[elem++] = prev;
        }

        prev = a[i];
    }

    b[elem++] = a[n-1];
    printf("%d\n", elem);

    for (int i = 0; i < elem; i++)
        printf("%d ", b[i]);

    printf("\n");

    return 0;
}
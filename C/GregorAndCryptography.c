#include<stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("2 %d\n", n - 1);
    }
    return 0;
}
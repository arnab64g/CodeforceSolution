#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("1\n");
    else if (n == 1)
        printf("5\n");
    else printf("25\n");
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int n, n1, n2, dis, count;
    scanf("%d", &n);
    while (n--){
        scanf("%d %d", &n1, &n2);
        dis = abs(n1 - n2);
        count = dis/10;
        if (dis % 10 != 0)
            count++;
        printf("%d\n", count);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int t, h, m, tm;
    scanf("%d", &t);

    while (t--){
        scanf("%d %d", &h, &m);
        tm = 0;
        tm += (23-h)*60;
        tm += 60 - m;
        printf("%d\n", tm);
    }
    
    return 0;
}
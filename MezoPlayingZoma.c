#include <stdio.h>
int main()
{
    int n, i , lc = 0, rc = 0;
    char ch[100005];
    scanf("%d", &n);
    scanf(" %s", ch);
    for ( i = 0; i < n; i++){
        if (ch[i] == 'L')
            lc++;
        else if(ch[i] == 'R')
            rc++;
    }
    printf("%d\n", lc+rc+1);
    return 0;
}
#include <stdio.h>
int main()
{
    int s, v1, v2, t1, t2, fst, sec;
    scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2);
    fst = 2*t1+s*v1;
    sec = 2*t2+s*v2;
    if(fst < sec)
        printf("First\n");
    else if(sec < fst)
        printf("Second\n");
    else printf("Friendship\n");
    return 0;
}
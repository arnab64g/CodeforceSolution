#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int t, a[4], b[4], mx, my;
    scanf("%d", &t);

    while (t--)
    {
        for (int i = 0; i < 4; i++)
        {
            scanf("%d %d", &a[i], &b[i]);
        }
        mx = 0;
        my = 0;

        for (int i = 1; i < 4; i++)
        {
            if (abs(a[i] - a[0])> mx)
            {
                mx = abs(a[i] - a[0]);
            }

            if (abs(b[i] - b[0])> my)
            {
                my = abs(b[i] - b[0]);
            }
        
        }
        printf("%d\n", mx * my);
    }

    return 0;
}

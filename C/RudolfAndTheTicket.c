#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int t, n, m, k, count;
    int *b, *c;

    scanf("%d", &t);
    
    while (t--)
    {
        scanf("%d %d %d", &n, &m, &k);

        b = (int *) calloc(sizeof(int), n);
        c = (int *) calloc(sizeof(int), m);
        count = 0;
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &c[i]);
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (b[i] + c[j] <= k)
                {
                    count++;
                }
                
            }
        }

        free(b);
        free(c);

        printf("%d\n", count);
    }
    
    return 0;
}

#include<stdio.h>
#include<limits.h>

int main()
{
    int t, n, a[9], min_index, min_value, prod;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        min_index = -1;
        min_value = INT_MAX;
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] < min_value)
            {
                min_index = i;
                min_value = a[i];
            }
        }
        
        a[min_index]++;
        prod = 1;

        for (int i = 0; i < n; i++)
        {
            prod *= a[i];
        }
        
        printf("%d\n", prod);
    }

    return 0;
}

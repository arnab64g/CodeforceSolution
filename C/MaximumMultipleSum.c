#include<stdio.h>

int main()
{
    int t, n, x, sum, max_sum, count;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        
        x = 2;
        sum = 0;
        max_sum = 0;

        for (int i = 2; i <= n; i++)
        {
            sum = 0;
            count = 1;

            while (i * count <= n)
            {
                sum += i * count;
                count++;
            }
            
            if (sum > max_sum)
            {
                max_sum = sum;
                x = i;
            }
        }
        
        printf("%d\n", x);
    }
    
    return 0;
}

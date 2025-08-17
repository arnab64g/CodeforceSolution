#include<stdio.h>

int main(int argc, char const *argv[])
{
    int t, n, total;
    scanf("%d", &t);
    while (t--)
    {
        char ch[11];
        int left = -1;
        int right = -1;

        scanf("%d", &n);
        scanf("%s", ch);
        
        for (int i = 0; i < n; i++)
        {
            if (ch[i] == 'B')
            {
                left = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (ch[i] == 'B')
            {
                right = i;
                break;
            }
        }
        
        if (left == -1 || right == -1)
        {
            total = n;
        }
        else
        {
            total = right - left + 1;
        }

        printf("%d\n", total);
    }
    
    return 0;
}

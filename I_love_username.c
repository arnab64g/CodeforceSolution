#include <stdio.h>
int main()
{
    int i, n, max, min, score, count = 0;
    scanf("%d", &n);
    scanf("%d", &score);
    max = score;
    min = score;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &score);
        if (score > max){
            count++;
            max = score;
        }
        else if(score < min){
            count++;
            min = score;
        }
    }
    printf("%d\n", count);
    
    return 0;
}
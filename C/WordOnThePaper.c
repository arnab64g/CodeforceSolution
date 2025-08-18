#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char word[65];
        int count = 0;
    
        for (int i = 0; i < 8; i++)
        {
            char str[9];
            scanf("%s", str);
    
            for (int j = 0; j < 8; j++)
            {
                if(str[j] != '.'){
                    word[count] = str[j];
                    count++;
                }
            }
        }
    
        word[count] = '\0';
    
        printf("%s\n", word);
    }
    
    return 0;
}

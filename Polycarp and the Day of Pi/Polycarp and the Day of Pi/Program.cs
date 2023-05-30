// See https://aka.ms/new-console-template for more information
char[] pi = "3141592653589793238462643383279".ToCharArray();
int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
    char[] str = Console.ReadLine().ToCharArray();
    int count = 0;

    for (int j = 0; j < str.Length; j++)
    {
        if (str[j] == pi[j])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    
    Console.WriteLine(count);
}
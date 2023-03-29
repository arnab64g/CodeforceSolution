int t = int.Parse(Console.ReadLine());
for (int i = 0; i < t; i++)
{
    int n = int.Parse(Console.ReadLine());
    char[] str = Console.ReadLine().ToCharArray();
    int max = 0, val;

    for (int j = 0; j < n; j++)
    {
        val = str[j] - 'a' + 1;
        if (val > max) max = val;
    }

    Console.WriteLine(max);
}

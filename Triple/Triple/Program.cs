int t = int.Parse(Console.ReadLine());
for (int i = 0; i < t; i++)
{
    int n = int.Parse(Console.ReadLine());
    int[] ints = Console.ReadLine().Split(' ').Select(int.Parse).ToArray(); 
    Array.Sort(ints);
    int count = 1, value = ints[n - 1], tg = -1;
    for (int j = n - 2; j >= 0; j--)
    {
        if (value == ints[j])
        {
            count++;
        }
        else 
        { 
            count = 1;
            value = ints[j];
        }
        if (count == 3)
        {
            tg = value;
            break;
        }
    }
    Console.WriteLine(tg);
}

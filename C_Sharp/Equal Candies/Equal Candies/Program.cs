int t = int.Parse(Console.ReadLine());
for (int i = 0; i < t; i++)
{
    int n = int.Parse(Console.ReadLine());
    string[] s = Console.ReadLine().Split(' ');
    int[] ints = new int[s.Length];
    
    for (int j = 0; j < s.Length; j++)
    {
        ints[j] = int.Parse(s[j]);
    }

    Array.Sort(ints);
    if (ints[0] == ints[s.Length-1])
    {
        Console.WriteLine("0");
    }
    else 
    {
        long count = 0;
        for (int j = 1; j < s.Length; j++)
        {
            count+= ints[j] - ints[0];
        }
        Console.WriteLine(count);
    }
}
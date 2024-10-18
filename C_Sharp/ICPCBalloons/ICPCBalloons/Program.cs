int t = int.Parse(Console.ReadLine());
for (int i = 0; i < t; i++)
{
    int n = int.Parse(Console.ReadLine());
    char[] chars = Console.ReadLine().ToCharArray();
    HashSet<char> set = new HashSet<char>();
    int nob = 0;
    for (int j = 0; j < chars.Length; j++)
    {
        if (!set.Contains(chars[j]))
        {
            nob += 2;
            set.Add(chars[j]);
        }
        else
        {
            nob += 1;
        }
    }
    Console.WriteLine(nob);
}
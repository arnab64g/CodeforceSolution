int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
    int n = int.Parse((Console.ReadLine()));
    string[] numbers = Console.ReadLine().Split(' ');
    HashSet<string> nums = new HashSet<string>();
    
    for (int j = 0; j < n; j++)
    {
        nums.Add(numbers[j]);
    }
    
    if ((n - nums.Count) % 2 == 1)
    {
        Console.WriteLine(nums.Count - 1);
    }
    else
    {
        Console.WriteLine(nums.Count);
    }
}
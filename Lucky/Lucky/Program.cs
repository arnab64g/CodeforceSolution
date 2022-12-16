int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
    string s = Console.ReadLine();
    int first = 0; 
    int second = 0;
    for (int j = 0; j < 3; j++)
    {
        first += int.Parse(s[j].ToString());
    }
    for (int j = s.Length - 1; j > s.Length - 4; j--)
    {
        second += int.Parse(s[j].ToString());
    }
    if(second == first)
    {
        Console.WriteLine("Yes");
    }
    else
    {
        Console.WriteLine("No");
    }
}
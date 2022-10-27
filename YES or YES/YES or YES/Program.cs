int t = int.Parse(Console.ReadLine());
for (int i = 0; i < t; i++)
{
    string s = Console.ReadLine();
    s = s.ToUpper();
    if(s == "YES")
    {
        Console.WriteLine("YES");
    }
    else
    {
        Console.WriteLine("NO");
    }
}
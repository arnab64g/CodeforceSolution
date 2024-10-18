int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
    string[] s = Console.ReadLine().Split(' ');
    if (int.Parse(s[0]) + int.Parse(s[1]) == int.Parse(s[2]))
    {
        Console.WriteLine('+');
    }
    else { Console.WriteLine("-"); }
}
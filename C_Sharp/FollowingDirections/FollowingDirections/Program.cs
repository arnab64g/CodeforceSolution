int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
    int sz = int.Parse(Console.ReadLine());
    char[] s = Console.ReadLine().ToCharArray();
    int x =0, y = 0;
    bool res = false;
    for (int j = 0; j < sz; j++)
    {
        switch (s[j])
        {
            case 'U':
                x++;
                break;
            case 'D':
                x--; 
                break;
            case 'L':
                y--;
                break;
            case 'R':
                y++;
                break;
        }
        if (x == 1 && y == 1)
        {
            res = true;
            break;
        }
    }
    if (res)
    {
        Console.WriteLine("YES");
    }
    else 
    {
        Console.WriteLine("NO");
    }
}

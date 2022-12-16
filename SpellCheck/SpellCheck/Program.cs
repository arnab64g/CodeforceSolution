int n = int.Parse(Console.ReadLine());

for (int i = 0; i < n; i++)
{
    int len = int.Parse(Console.ReadLine());
    string s = Console.ReadLine();
    char[] l = s.ToCharArray();

    if (len != 5)
    {
        Console.WriteLine("NO");
    }
    else
    {
        HashSet<char> list = new HashSet<char>();
    
        for (int j = 0; j < 5; j++)
        {
            list.Add(l[j]);
        }
        
        char[] name = "Timur".ToCharArray();
        bool res = true;
        
        for (int j = 0; j < 5; j++)
        {
            if (!list.Contains(name[j]))
            {
                res = false;
                break;
            }
        }
        
        if (!res)
        {
            Console.WriteLine("NO");
        }
        else
        {
            Console.WriteLine("YES");
        }
    }
}
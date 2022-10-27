int t = int.Parse(Console.ReadLine());
for (int i = 0; i < t; i++)
{
    string val = Console.ReadLine();
    string[] m = val.Split(' ');
    int count = 0;
    for (int j = 1; j < 4; j++)
    {
        if (int.Parse(m[0]) < int.Parse(m[j]))
        {
            count++;
        }
                }
    Console.WriteLine(count);
}
int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
    int n = int.Parse(Console.ReadLine());
    string[] numb = Console.ReadLine().Split(' ');
    int[] numbs = new int[n];
    
    for (int j = 0; j < n; j++)
    {
        numbs[j] = int.Parse(numb[j]);
    }

    for (int j = 0; j < n; j++)
    {
        string[] s = Console.ReadLine().Split(' ');
        int nmoves = int.Parse(s[0]);
        string moves = s[1];
        
        for (int k = 0; k < nmoves; k++)
        {
            if (moves[k] == 'U')
            {
                if (numbs[j] == 0)
                {
                    numbs[j] = 9;
                }
                else
                {
                    numbs[j]--;
                }
            }
            else if (moves[k] == 'D')
            {
                if ((numbs[j] == 9))
                {
                    numbs[j] = 0;
                }
                else
                {
                    numbs[j]++;
                }
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        Console.Write(numbs[j] + " ");
    }
    Console.WriteLine();
}
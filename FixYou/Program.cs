using System;
namespace FixYou
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s = Console.ReadLine().Split(' ');
                int n = int.Parse(s[0]);
                int m = int.Parse(s[1]);
                string[] val = new string[n];
                for (int j = 0; j < n; j++)
                    val[j] = Console.ReadLine();
                int count = 0;
                for (int j = 0; j < m; j++)
                    if (val[n-1][j] == 'D')
                        count++;
                for (int j = 0; j < n; j++)
                    if (val[j][m-1] == 'R')
                        count++;
                Console.WriteLine(count);
            }
        }
    }
}

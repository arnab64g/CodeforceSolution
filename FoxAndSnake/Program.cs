using System;

namespace FoxAndSnake
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, m, temp, d;
            string[] s = Console.ReadLine().Split(' ');
            n = int.Parse(s[0]);
            m = int.Parse(s[1]);
            if (n % 2 == 0){
                temp = n;
                n = m;
                m = temp;
            }
            for (int i = 0; i < n; i++){
                d = i%4;
                switch (d)
                {
                    case 0:
                    case 2:
                        for (int j = 0; j < m; j++)
                            Console.Write('#');
                        Console.WriteLine();
                        break;
                    case 1:
                        for (int j = 0; j < m-1; j++)
                            Console.Write('.');
                        Console.WriteLine('#');
                        break;
                    case 3:
                        Console.Write('#');
                        for (int j = 1; j < m; j++)
                            Console.Write('.');
                        Console.WriteLine();
                        break;
                }
            }
        }
    }
}

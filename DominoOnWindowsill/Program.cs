using System;
namespace DominoOnWindowsill
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s1 = Console.ReadLine().Split(' ');
                string[] s2 = Console.ReadLine().Split(' ');
                int n = int.Parse(s1[0]);
                int k1 = int.Parse(s1[1]);
                int k2 = int.Parse(s1[2]);
                int w = int.Parse(s2[0]);
                int b = int.Parse(s2[1]);
                int wc = k1+k2;
                int bc = 2*n - wc;
                if (wc/2 >= w && bc/2 >= b)
                    Console.WriteLine("YES");
                else Console.WriteLine("NO");
            }
        }
    }
}

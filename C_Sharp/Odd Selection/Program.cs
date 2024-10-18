using System;

namespace Odd_Selection
{
    class Program
    {
        static bool IsPossible(string[] s, int n, int x)
        {
            int noo = 0, noe = 0;
            for (int i = 0; i < n; i++){
                if(int.Parse(s[i]) %2 == 0)
                    noe++;
                else noo++;
            }
            if(noo == 0)
                return false;
            else if(noo % 2 == 0 && x == n)
                return false;
            else if(x%2 == 0 && noo == n)
                return false;
            else return true;
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] nx = Console.ReadLine().Split(' ');
                int n = int.Parse(nx[0]);
                int x = int.Parse(nx[1]);
                string[] s = Console.ReadLine().Split(' ');
                if(IsPossible(s, n, x))
                    Console.WriteLine("YES");
                else Console.WriteLine("NO");
            }
        }
    }
}

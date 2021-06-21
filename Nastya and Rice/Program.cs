using System;
namespace Nastya_and_Rice
{
    class Program
    {
        static bool Inconsistency(string[] s)
        {
            bool r1 = false, r2 = false;
            int n = int.Parse(s[0]);
            int a = int.Parse(s[1]);
            int b = int.Parse(s[2]);
            int c = int.Parse(s[3]);
            int d = int.Parse(s[4]);
            int min = n * (a - b);
            int max = n * (a + b);
            if(min <= c + d)
                r1 = true;
            if(max >= c - d)
                r2 = true;
            if(r1 && r2)
                return true;
            else return false;
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s = Console.ReadLine().Split(' ');
                if(Inconsistency(s))
                    Console.WriteLine("YES");
                else Console.WriteLine("NO");
            }
        }
    }
}

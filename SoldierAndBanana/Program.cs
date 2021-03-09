using System;

namespace SoldierAndBanana
{
    class Program
    {
        static void Main(string[] args)
        {
            int k, n, w, cost, br;
            string []s = Console.ReadLine().Split(' ');
            k = int.Parse(s[0]);
            n = int.Parse(s[1]);
            w = int.Parse(s[2]);
            cost = k*((w+1)* w)/2; 
            br = cost - n;
            if (br > 0)
                Console.WriteLine(br);
            else Console.WriteLine(0);
        }
    }
}

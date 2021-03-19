using System;

namespace VanyaAndFence
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, h, count = 0;
            string []s = Console.ReadLine().Split(' ');
            n = int.Parse(s[0]);
            h = int.Parse(s[1]);
            int thig;
            string []hin = Console.ReadLine().Split(' ');
            for (int i = 0; i < n; i++)
            {
                thig = int.Parse(hin[i]);
                count += thig/h;
                if(thig % h != 0)
                    count++;

            }
            Console.WriteLine(count);
        }
    }
}

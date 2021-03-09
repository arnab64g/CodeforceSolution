using System;

namespace BearAndBigBrother
{
    class Program
    {
        static void Main(string[] args)
        {
            int l, b, count = 0;
            string []s = Console.ReadLine().Split(' ');
            l = int.Parse(s[0]);
            b = int.Parse(s[1]);
            while (true)
            {
                l *= 3;
                b *= 2;
                count++;
                if (l > b)
                    break;
            }
            Console.WriteLine(count);
        }
    }
}

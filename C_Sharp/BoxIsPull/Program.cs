using System;
namespace BoxIsPull
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s = Console.ReadLine().Split(' ');
                int x1 = int.Parse(s[0]);
                int y1 = int.Parse(s[1]);
                int x2 = int.Parse(s[2]);
                int y2 = int.Parse(s[3]);
                int dx = Math.Abs(x2 - x1);
                int dy = Math.Abs(y2 - y1);
                int dxy = dx+dy;
                if(dx != 0 && dy != 0)
                    dxy += 2;
                Console.WriteLine(dxy);
            }
        }
    }
}

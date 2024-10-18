using System;
namespace NewYearAndNaming
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split(' ');
            int n = int.Parse(s[0]);
            int m = int.Parse(s[1]);
            int noy = n*m;
            string[] s1 = Console.ReadLine().Split(' ');
            string[] s2 = Console.ReadLine().Split(' ');
            string[] alyn = new string[noy];
            int csn = 0, csm = 0;
            for (int i = 0; i < noy; i++){
                alyn[i] = s1[csn++];
                alyn[i] += s2[csm++];
                if (csn == n)
                    csn = 0;
                if (csm == m)
                    csm = 0;
            }
            int q = int.Parse(Console.ReadLine());
            for (int i = 0; i < q; i++){
                int y = int.Parse(Console.ReadLine());
                y %= noy;
                if(y % noy == 0)
                    y = noy;
                Console.WriteLine(alyn[y-1]);
            }
        }
    }
}

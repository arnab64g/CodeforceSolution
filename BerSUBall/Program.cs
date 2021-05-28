using System;
namespace BerSUBall
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] sn = Console.ReadLine().Split(' ');
            int[] an = new int[n];
            int m = int.Parse(Console.ReadLine());
            string[] sm = Console.ReadLine().Split(' ');
            int[] am = new int[m];
            for (int i = 0; i < n; i++)
                an[i] = int.Parse(sn[i]); 
            for (int i = 0; i < m; i++)
                am[i] = int.Parse(sm[i]);
            Array.Sort(an);
            Array.Sort(am);
            int tn = 0, tm = 0, count = 0;
            while (tn < n && tm < m){
                if (Math.Abs(an[tn] - am[tm]) <= 1){
                    count++;
                    tn++;
                    tm++;
                }
                else if (an[tn] < am[tm])
                    tn++;
                else if (an[tn] > am[tm])
                    tm++;
            }
            Console.WriteLine(count);
        }
    }
}

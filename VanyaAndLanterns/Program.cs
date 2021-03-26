using System;

namespace VanyaAndLanterns
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, l, distance;
            double mind;
            string[] s = Console.ReadLine().Split(' ');
            n = int.Parse(s[0]);
            l = int.Parse(s[1]);
            s = Console.ReadLine().Split(' ');
            int[] lntr = new int[n];
            for (int i = 0; i < n; i++)
                lntr[i] = int.Parse(s[i]);
               
            Array.Sort(lntr);
            int max =  (2*lntr[0] > 2*(l - lntr[n-1])) ? 2*lntr[0] : 2*(l - lntr[n-1]);
            for (int i = 1; i < n; i++)
            {
                distance = lntr[i]- lntr[i-1];
                if(distance > max)
                    max = distance;
            }
   
            mind = (double)max/2;
           
            Console.WriteLine(string.Format("{0:0.0000000000}", mind));
        }
    }
}

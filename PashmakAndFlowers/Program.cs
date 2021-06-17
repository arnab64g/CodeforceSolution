using System;

namespace PashmakAndFlowers
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] s = Console.ReadLine().Split(' ');
            int[] b = new int[n];
            for (int i = 0; i < n; i++)
                b[i] = int.Parse(s[i]);
            Array.Sort(b);
            long minc = 0, maxc = 0;
            int min = b[0], max = b[n-1];
            for (int i = 0; i < n; i++){
                if(b[i] == min)
                    minc++;
                else break;
            }
            for (int i = n - 1; i >= 0; i--){
                if(b[i] == max)
                    maxc++;
                else
                    break;
            }
            if(min == max)
                Console.WriteLine("0 "+(minc*(minc - 1))/2);
            else
                Console.WriteLine((max - min)+" "+minc*maxc);
        }
    }
}

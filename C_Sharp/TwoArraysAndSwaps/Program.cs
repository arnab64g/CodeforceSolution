using System;
namespace TwoArraysAndSwaps
{
    class Program
    {
        static int maxsum(int[] a, int[] b, int suma, int sumb, int k, int n){
            int tempa, tempb;
            for (int j = 0; j < k; j++){  
                tempa = a[j];
                tempb = b[n-j-1];
                if(tempa > tempb)
                    break;
                suma -= tempa;
                sumb -= tempb;
                a[j] = tempb;
                suma += tempb;
                b[n-j-1] = tempa;
                sumb += tempb;    
            }
            return suma;
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string []nk = Console.ReadLine().Split(' ');
                int n = int.Parse(nk[0]);
                int k = int.Parse(nk[1]);
                int[] a = new int[n];
                int[] b = new int[n];
                int suma = 0, sumb = 0, max;
                string []a1 = Console.ReadLine().Split();
                string []b1 = Console.ReadLine().Split();
                for (int j = 0; j < n; j++){
                    a[j] = int.Parse(a1[j]);
                    b[j] = int.Parse(b1[j]);
                    suma += a[j];
                    sumb += b[j];
                }
                Array.Sort(a, 0, n);
                Array.Sort(b, 0, n);
                if(k == 0)
                    max = suma;
                else max = maxsum(a, b, suma, sumb, k, n);
                Console.WriteLine(max);
            }
        }
    }
}

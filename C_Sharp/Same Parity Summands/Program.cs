using System;

namespace Same_Parity_Summands
{
    class Program
    {
        static void PrintK(int k, int temp, int v)
        {
            Console.WriteLine("YES");
            for (int i = 0; i < k; i++)
                Console.Write(v+" ");
            Console.WriteLine(temp);
        }
        static void KNoOfArray(int n, int k)
        {
            int tmp;
            if(n < k)
                Console.WriteLine("NO");
            else if(n % 2 == 1){
                tmp = n - (k - 1);
                if(tmp % 2 == 0)
                    Console.WriteLine("NO");
                else
                    PrintK(k - 1, tmp, 1);
           }
           else{
                if(k % 2 == 0){
                    tmp = n - k + 1;
                    PrintK(k - 1, tmp, 1);
                }
                else {
                    tmp = n - 2 *(k - 1);
                    if(tmp < 2)
                        Console.WriteLine("NO");
                    else PrintK(k - 1, tmp, 2);
                }
           }
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] nk = Console.ReadLine().Split(' ');
                int n = int.Parse(nk[0]);
                int k = int.Parse(nk[1]);
                KNoOfArray(n, k);
            }
        }
    }
}

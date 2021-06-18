using System;

namespace FedorAndNewGame
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split(' ');
            int n = int.Parse(s[0]);
            int m = int.Parse(s[1]);
            int k = int.Parse(s[2]);
            int res = 0;
            int[] sol = new int[m+1];
            for (int i = 0; i < m+1; i++)
                sol[i] = int.Parse(Console.ReadLine());
            for (int i = 0; i < m; i++){
                int count = 0;
                for (int j = 0; j < n; j++){
                    if(((1 << j) & sol[i]) != ((1 << j) & sol[m]))
                        count++;
                }
                if(count <= k )
                    res++;
            }
            Console.WriteLine(res);
        }
    }
}

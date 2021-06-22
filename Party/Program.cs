using System;
using System.Collections.Generic;
namespace Party
{
    class Program
    {
        static int MaxHeight(List<int>[] ll, int i)
        {
            if(ll[i].Capacity == 0) 
                return 0;
            else{
                int max = 0, hg;
                foreach (int item in ll[i]){
                    hg = 1 + MaxHeight(ll, item);
                    if(hg > max)
                        max = hg;
                }
                return max;
            }
        }
        static void Main(string[] args)
        {
            int node;
            int n = int.Parse(Console.ReadLine());
            List<int>[] ll = new List<int>[n+1];
            for (int i = 0; i <= n; i++)
                ll[i] = new List<int>();
            for (int i = 1; i <= n; i++){
                node = int.Parse(Console.ReadLine());
                if(node < 0)
                    ll[0].Add(i);
                else ll[node].Add(i);
            }
            int count = 0;
            for (int i = 0; i <= n; i++)
                if(ll[i].Capacity > 0)
                    count++;
            Console.WriteLine(MaxHeight(ll, 0));
        }
    }
}

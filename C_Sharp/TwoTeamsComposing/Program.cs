using System;

namespace TwoTeamsComposing
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                int n = int.Parse(Console.ReadLine());
                string[] s = Console.ReadLine().Split(' ');
                int[] index = new int[200001];
                int dist = 0, max = 0, sk;
                for (int j = 0; j < n; j++){
                    sk = int.Parse(s[j]);
                    if(index[sk] == 0)
                        dist++;
                    index[sk]++;
                    if(index[sk] > max)
                        max = index[sk];
                }
                if(max == dist)
                    Console.WriteLine(max - 1);
                else{
                    if(max > dist)
                        Console.WriteLine(dist);
                    else Console.WriteLine(max);
                }
            }
        }
    }
}

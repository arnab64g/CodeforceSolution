using System;
using System.Collections.Generic;
namespace New_Theatre_Square
{
    class Program
    {
        static int MinCost(string s, int len, int x, int y)
        {
            int cost1 = 0, cost2 = 0;
            List<int> l = new List<int>();
            int count  = 0;
            for (int i = 0; i < len; i++){
                if(s[i] == '.')
                    count++;
                else{
                    l.Add(count);
                    count = 0;
                }
            }
            if(count != 0)
                l.Add(count);
            foreach (var n in l){
                cost1 += n * x;
                cost2 += (n / 2) * y + x * (n % 2);
            }
            if(cost1 > cost2)
                return cost2;
            else return cost1;
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s = Console.ReadLine().Split(' ');
                int n = int.Parse(s[0]);
                int m = int.Parse(s[1]);
                int x = int.Parse(s[2]);
                int y = int.Parse(s[3]);
                int cost = 0;
                for (int j = 0; j < n; j++){
                    string str = Console.ReadLine();
                    cost += MinCost(str, m, x, y);
                }
                Console.WriteLine(cost);
            }
        }
    }
}

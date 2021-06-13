using System;

namespace Fence
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split(' ');
            int n = int.Parse(s[0]);
            int k = int.Parse(s[1]);
            string[] h = Console.ReadLine().Split(' ');
            int sum = 0;
            for (int i = 0; i < k; i++)
                sum += int.Parse(h[i]);
            int min = sum, pos = 0;
            for (int i = k; i < n; i++){
                sum -= int.Parse(h[i - k]);
                sum += int.Parse(h[i]);
                if(sum < min){
                    min = sum;
                    pos = i - k + 1;
                }
            }
            Console.WriteLine(pos+1);
        }
    }
}

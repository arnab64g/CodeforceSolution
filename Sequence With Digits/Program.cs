using System;
namespace Sequence_With_Digits
{
    class Program
    {
        static long MinMax(long number)
        {
            long max = 0, min = 9, mod;
            while (number != 0){
                mod = number % 10;
                if(mod < min)
                    min = mod;
                if(mod > max)
                    max = mod;
                number /= 10;
            }
            return max * min;
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s = Console.ReadLine().Split(' ');
                long a = long.Parse(s[0]);
                long k = long.Parse(s[1]);
                long temp;
                for (long j = 1; j < k; j++){
                    temp = MinMax(a);
                    if(temp == 0)
                        break;
                    a += temp;
                }
                Console.WriteLine(a);
            }
        }
    }
}

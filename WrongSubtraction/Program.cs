using System;
namespace WrongSubtraction
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, k;
            string []s = Console.ReadLine().Split();
            n = int.Parse(s[0]);
            k = int.Parse(s[1]);
            while (k != 0){
                if(n%10 == 0)
                    n /= 10;
                else n--;
                k--;
            }
            Console.WriteLine(n);
        }
    }
}

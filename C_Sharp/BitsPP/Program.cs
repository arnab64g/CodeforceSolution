using System;
namespace BitsPP
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, count = 0;
            string s;
            n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++){
                s = Console.ReadLine();
                for (int j = 0; j < 2; j++){
                    if (s[j] == '+' && s[j+1] == '+')
                        count++;
                    else if (s[j] == '-' && s[j+1] == '-')
                        count--;
                }
            }
            Console.WriteLine(count);
        }
    }
}

using System;
namespace WordCount
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            n = int.Parse(Console.ReadLine());
            String s, ns;
            for (int i = 0; i < n; i++)
            {
                s = Console.ReadLine();
                if (s.Length <= 10)
                    Console.WriteLine(s);                    
                else{
                    ns = "";
                    ns += s[0];
                    ns += Convert.ToString(s.Length - 2);
                    ns += s[s.Length-1];
                    Console.WriteLine(ns);
                }
            }
        }
    }
}

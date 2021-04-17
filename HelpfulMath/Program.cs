using System;
namespace HelpfulMath
{
    class Program
    {
        static void Main(string[] args)
        {
            string []s = Console.ReadLine().Split('+');
            string ns = "";
            int []a = new int[s.Length];
            for(int i = 0; i < s.Length; i++)
                a[i] = int.Parse(s[i]);                
            Array.Sort(a, 0, s.Length);
            ns += a[0];
            for (int i = 1; i < s.Length; i++){
                ns += '+';
                ns += a[i].ToString();
            }
            Console.WriteLine(ns);
        }
    }
}

// See https://aka.ms/new-console-template for more information

using System;
namespace CSharpProj
{
    class Program
    {
        static void Main(String[] args){
            int t = int.Parse(Console.ReadLine().ToString());
            while (t > 0)
            {
                string[] s = Console.ReadLine().Split(' ');
                int a = int.Parse(s[0]);
                int b = int.Parse(s[1]);
                int c = int.Parse(s[2]);
                int total = Math.Abs(a - b) * 2;
                if(total > 2){
                    int d = c + total/2;
                    d %= total;
                    if(d == 0)
                        d = total;
                    if(c > total || a > total || b > total)
                        d = -1;
                    Console.WriteLine(d);
                }
                else Console.WriteLine(-1);
                t--;
            }
        }
    }
}
using System;

namespace _01_Game
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string s = Console.ReadLine();
                int c0 = 0, c1 = 0;
                for (int j = 0; j < s.Length; j++){
                    if(s[j] == '0')
                        c0++;
                    else c1++;
                }
                int min = c0;
                if(c1 < c0)
                    min = c1;
                if(min % 2 ==0)
                    Console.WriteLine("NET");
                else Console.WriteLine("DA");
            }
        }
    }
}

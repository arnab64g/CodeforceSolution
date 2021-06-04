using System;

namespace InGameChat
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                int count = 0;
                int n = int.Parse(Console.ReadLine());
                string s = Console.ReadLine();
                for (int j = n - 1; j >= 0; j--){
                    if(s[j] == ')')
                        count++;
                    else break;
                }
                if(count > n - count)
                    Console.WriteLine("YES");
                else Console.WriteLine("NO");
            }
        }
    }
}

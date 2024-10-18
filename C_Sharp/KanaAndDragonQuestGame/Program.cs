using System;

namespace KanaAndDragonQuestGame
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s = Console.ReadLine().Split(' ');
                int n = int.Parse(s[0]);
                int a = int.Parse(s[1]);
                int b = int.Parse(s[2]);
                int minpoint = b * 10;
                while (a > 0){
                    if(n >= 20){
                        n /= 2;
                        n += 10;
                        a--;
                    }
                    else break;
                }
                if(n <= minpoint)
                    Console.WriteLine("YES");
                else Console.WriteLine("NO");
            }
        }
    }
}

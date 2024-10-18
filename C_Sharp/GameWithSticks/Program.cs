using System;
namespace GameWithSticks
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, m;
            int count = 0;
            string[] s = Console.ReadLine().Split(' ');
            n = int.Parse(s[0]);
            m = int.Parse(s[1]);
            bool[ , ] sticks =  new bool[n, m];
            while(!sticks[0, 0]){
                n--;
                m--;
                for (int i = 0; i <= n; i++)
                    sticks[i, m] = true;
                for (int i = 0; i <= m; i++)
                    sticks[n, i] = true;
                count++;
            }
            if(count % 2 == 0)
                Console.WriteLine("Malvika");
            else Console.WriteLine("Akshat");
        }
    }
}

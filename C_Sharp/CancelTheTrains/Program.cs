using System;
namespace CancelTheTrains
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                int count = 0;
                string[] str = Console.ReadLine().Split(' ');
                int n = int.Parse(str[0]);
                int m = int.Parse(str[1]);
                string[] strn = Console.ReadLine().Split(' ');
                string[] strm = Console.ReadLine().Split(' ');
                bool[] res = new bool[101];
                for (int j = 0; j < n; j++)
                    res[int.Parse(strn[j])] = true;
                for (int j = 0; j < m; j++)
                    if(res[int.Parse(strm[j])])
                        count++;
                Console.WriteLine(count);
            }
        }
    }
}

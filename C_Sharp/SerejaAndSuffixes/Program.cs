using System;

namespace SerejaAndSuffixes
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split(' ');
            int n = int.Parse(s[0]);
            int m = int.Parse(s[1]);
            string[] str = Console.ReadLine().Split(' ');
            bool[] isprea = new bool[100001];
            int[] index = new int[n];
            int value, disnum = 0;
            for (int i = n - 1; i >= 0; i--){
                value = int.Parse(str[i]);
                if(!isprea[value]){
                    isprea[value] = true;
                    disnum++;
                }
                index[i] = disnum;
            }
            for (int i = 0; i < m; i++){
                int p = int.Parse(Console.ReadLine());
                Console.WriteLine(index[p-1]);
            }
        }
    }
}

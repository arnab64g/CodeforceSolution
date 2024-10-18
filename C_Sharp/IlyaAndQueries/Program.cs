using System;
namespace IlyaAndQueries
{
    class Program
    {
        static void Main(string[] args)
        {
            String s = Console.ReadLine();
            int q = int.Parse(Console.ReadLine());
            int len = s.Length;
            int[] index = new int[len];
            index[0] = 0;
            int count = 0;
            for (int i = 0; i < len - 1; i++){
                if(s[i] == s[i+1])
                    count++;
                index[i+1] = count;
            }
            for (int i = 0; i < q; i++){
                string[] lr = Console.ReadLine().Split(' ');
                int l = int.Parse(lr[0]);
                int r = int.Parse(lr[1]);
                Console.WriteLine(index[r - 1] - index[l - 1]);
            }
        }
    }
}

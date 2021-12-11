using System;
namespace Linear_KeyBoard
{
    class Program
    {
        static void Main(string[] args){
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++)
            {
                char[] kb = Console.ReadLine().ToCharArray();
                int[] loc = new int[26];
                for (int j = 0; j < 26; j++)
                {
                    loc[kb[j] - 'a'] = j;
                }
                int count = 0;
                char[] line = Console.ReadLine().ToCharArray();
                for (int j = 1; j < line.Length; j++)
                {
                    count += Math.Abs(loc[line[j] - 'a'] - loc[line[j-1] - 'a']);
                }
                Console.WriteLine(count);
            }
        }
    }
}
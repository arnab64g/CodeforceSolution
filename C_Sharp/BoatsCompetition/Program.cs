using System;

namespace BoatsCompetition
{
    class Program
    {
        static int CountTeam(int[] val, int sum){
            int len = val.Length;
            int temp, i = 0, j = len - 1, count = 0;
            while (i < j){
                temp = val[i] + val[j];
                if(temp == sum){
                    count++;
                    i++;
                    j--;
                }
                else if(temp < sum)
                    i++;
                else j--;
            }
            return count;
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                int n = int.Parse(Console.ReadLine());
                string[] s = Console.ReadLine().Split(' ');
                if(n == 1){
                    Console.WriteLine(0);
                    continue;
                }
                int[] val = new int[n];
                for (int j = 0; j < n; j++)
                    val[j] = int.Parse(s[j]);
                Array.Sort(val);
                int min = val[0] + val[1];
                int max = val[n-1] + val[n - 2];
                int team = 0, maxomum = 0;
                for (int j = min; j <= max; j++){
                    maxomum = CountTeam(val, j);
                    if(maxomum > team)
                        team = maxomum;
                }
                Console.WriteLine(team);
            }
        }
    }
}

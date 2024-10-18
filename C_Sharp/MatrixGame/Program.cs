using System;

namespace MatrixGame
{
    class Program
    {
        static void ClaimCells(bool[ , ] mx, int x, int y, int n, int m)
        {
            for (int i = 0; i < m; i++)
                mx[x, i] = true;
            for (int i = 0; i < n; i++)
                mx[i, y] = true;
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s = Console.ReadLine().Split(' ');
                int n = int.Parse(s[0]);
                int m = int.Parse(s[1]);
                bool[ , ] mx = new bool[n, m];
                for (int j = 0; j < n; j++){
                    string[] ms = Console.ReadLine().Split(' ');
                    for (int k = 0; k < m; k++)
                        if(ms[k] == "1"){
                            mx[j, k] = true;
                            ClaimCells(mx, j, k, n, m);
                        }
                }
                int count = 0;
                for (int j = 0; j < n; j++){
                    for (int k = 0; k < m; k++){
                        if(!mx[j, k]){
                            count++;
                            ClaimCells(mx, j, k, n, m);
                        }
                    }
                }
                if(count % 2 == 1)
                    Console.WriteLine("Ashish");
                else Console.WriteLine("Vivek");
            }
        }
    }
}

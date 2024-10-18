using System;

namespace Similar_Pairs
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                int n = int.Parse(Console.ReadLine());
                int[] a = new int[101];
                int value, odds = 0, evens = 0;
                string[] s = Console.ReadLine().Split(' ');
                for (int j = 0; j < n; j++){
                    value = int.Parse(s[j]);
                    a[value]++;
                    if(value % 2 == 0)
                        evens++;
                    else odds++;
                }
                if(evens % 2 == 0)
                    Console.WriteLine("YES");
                else{
                    bool res = false;
                    for (int j = 1; j < 100; j++){
                        if(a[j] != 0 && a[j+1] != 0){
                            res = true;
                            break;
                        }
                    }
                    if(res)
                        Console.WriteLine("YES");
                    else Console.WriteLine("NO");
                }
            }
        }
    }
}

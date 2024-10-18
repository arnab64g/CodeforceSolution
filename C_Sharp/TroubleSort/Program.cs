using System;
namespace TroubleSort
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int .Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                int n = int.Parse(Console.ReadLine());
                string[] s1 = Console.ReadLine().Split(' ');
                string[] s2 = Console.ReadLine().Split(' ');
                bool st = true, r1 = false, r2 = false;
                for (int j = 1; j < n; j++){
                    if(int.Parse(s1[j]) < int.Parse(s1[j - 1])){
                        st = false;
                        break;
                    }
                }
                if(st)
                    Console.WriteLine("YES");
                else{
                    for (int j = 0; j < n; j++){
                        if(s2[j] == "0")
                            r1 = true;
                        if(s2[j] == "1")
                            r2 = true;
                        if(r1 && r2)
                            break;
                    }
                    if(r1 && r2)
                        Console.WriteLine("YES");
                    else Console.WriteLine("NO");
                }

            }
        }
    }
}

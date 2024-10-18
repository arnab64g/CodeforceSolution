using System;
namespace SpaceNavigation
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] xy = Console.ReadLine().Split(' ');
                int x = int.Parse(xy[0]);
                int y = int.Parse(xy[1]);
                string s = Console.ReadLine();
                bool res1 = false, res2 = false;
                int len = s.Length;
                int l = 0, r = 0, u = 0, d = 0;
                for (int j = 0; j < len; j++){
                    switch (s[j]){
                        case 'L':
                            l++;
                            break;
                        case 'R':
                            r++;
                            break;
                        case 'U':
                            u++;
                            break;
                        case 'D':
                            d++;
                            break;
                    }
                }
                if (x < 0){
                    if (Math.Abs(x) <= l)
                        res1 = true;
                }
                else{
                    if(x <= r)
                        res1 = true;
                }
                if (y < 0){
                    if (Math.Abs(y) <= d)
                        res2 = true;
                }
                else{
                    if(y <= u)
                        res2 = true;
                }
                if (res1 && res2)
                    Console.WriteLine("YES");
                else Console.WriteLine("NO");
            }
        }
    }
}

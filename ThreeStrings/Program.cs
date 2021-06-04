using System;

namespace ThreeStrings
{
    class Program
    {
        static void ThreeStr()
        {
            string a, b, c;
            a = Console.ReadLine();
            b = Console.ReadLine();
            c = Console.ReadLine();
            int l = a.Length;
            bool res = true;
            for (int i = 0; i < l; i++)
                if(a[i] != c[i] && b[i] != c[i]){
                    res = false;
                    break;
                }
            if(res)
                Console.WriteLine("YES");
            else Console.WriteLine("NO");
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++)
                ThreeStr();
        }
    }
}

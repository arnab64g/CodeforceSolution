using System;
namespace Decoding
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            string res = "";
            
            for (int i = 0; i < n; i++){
                if((n-i-1) % 2 == 0)
                    res += s[i];
                else res = s[i] + res;
            }
            if(res.Length != n)
                res += s[n-1];
            Console.WriteLine(res);
        }
    }
}

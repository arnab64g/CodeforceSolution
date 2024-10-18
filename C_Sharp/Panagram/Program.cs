using System;
namespace Panagram
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            char c;
            bool[] alph = new bool[26];
            bool res = true;
            string s;
            n = int.Parse(Console.ReadLine());
            s = Console.ReadLine();
            char[] ch = s.ToCharArray();
            for (int i = 0; i < n; i++){
                c = char.ToUpper(ch[i]);
                alph[c - 'A'] = true;
            }
            for (int i = 0; i < 26; i++)
                if (!alph[i]){
                    res = false;
                    break;
                }
            if (res)
                Console.WriteLine("YES");
            else
            Console.WriteLine("NO");
        }
    }
}

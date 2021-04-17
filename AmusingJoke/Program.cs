using System;
namespace AmusingJoke
{
    class Program
    {
        static void countLetter(int[] a, char[] line){
            int sz = line.Length;
            for (int i = 0; i < sz; i++)
                a[line[i] - 'A']++;            
        }
        static void Main(string[] args)
        {
            string a, b, t;
            bool ans = true;
            int[] cntlet = new int[26];
            int[] ttlcntlet = new int[26];
            a = Console.ReadLine();
            char[] l1 = a.ToCharArray();
            countLetter(cntlet, l1);
            b = Console.ReadLine();
            char[] l2 = b.ToCharArray();
            countLetter(cntlet, l2);
            t = Console.ReadLine();
            char[] l3 = t.ToCharArray();
            countLetter(ttlcntlet, l3);
            for (int i = 0; i < 26; i++)
                if (ttlcntlet[i] != cntlet[i]){
                    ans = false;
                    break;
                }
            if(ans)
                Console.WriteLine("YES");
            else Console.WriteLine("NO");
        }
    }
}

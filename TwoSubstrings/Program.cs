using System;

namespace TwoSubstrings
{
    class Program
    {
        static bool result(string s, int n)
        {
            int i = 0;
            bool r1 = false, r2 = false;
            while (i < n - 1){
                if(s[i] == 'A' ){
                    if(!r1 && s[i+1] == 'B'){
                        r1 = true;
                        i += 2;
                    }
                    else i++;
                }
                if(s[i] == 'B' ){
                    if(!r2 && s[i+1] == 'A'){
                        r2 = true;
                        i += 2;
                    }
                    else i++;
                }
                else i++;
                if(r1 && r2)
                    break;
            }
            if(r1 && r2)
                return true;
            else return false;

        }
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            s += 'E'; 
            int len = s.Length;
            bool r1 = result(s, len);
            string r = ""; 
            for (int i = len-1; i >= 0; i--)
                r += s[i];
            r += 'E';
            bool r2 = result(r, len + 1);
            if(r1 || r2)
                Console.WriteLine("YES");
            else Console.WriteLine("NO");
        }
    }
}

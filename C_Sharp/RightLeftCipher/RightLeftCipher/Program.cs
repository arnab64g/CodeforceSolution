using System;

namespace RightLeftCipher
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            int len = s.Length;
            int md = (len+1)/2;
            int ptr1 = md - 1;
            int ptr2 = md;
            string str = "";
            while(ptr1 >= 0 && ptr2 < len){
                str += s[ptr1--];
                str += s[ptr2++];
            }
            if (str.Length != len)
                str += s[0];
            Console.WriteLine(str);
        }
    }
}

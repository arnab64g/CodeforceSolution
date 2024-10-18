using System;
namespace AccurateLee
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                int n = int.Parse(Console.ReadLine());
                string s = Console.ReadLine();
                int ptr1 = 0, ptr2 = n - 1;
                string str1 = "", str2 = "";
                while (ptr1 < n){
                    if(s[ptr1] == '0')
                        str1 += s[ptr1++];
                    else break;
                }
                while (ptr2 >= 0){
                    if(s[ptr2] == '1')
                        str2 += s[ptr2--];
                    else break;
                }
                if(ptr2 > ptr1){
                    str1 += '0';
                }
                str1 += str2;
                Console.WriteLine(str1);
            }
        }
    }
}

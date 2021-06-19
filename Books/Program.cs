using System;

namespace Books
{
    class Program
    {
        static int MaximumBook(string[] s, int n, int t)
        {
            int time = 0;
            int ptr1 = 0, ptr2 = 0;
            int[] b = new int[n];
            for (int i = 0; i < n; i++)
                b[i] = int.Parse(s[i]);
            while(time <= t && ptr2 < n){
                time += b[ptr2];
                ptr2++;
            }
            if(time > t){
                time -= b[ptr2 - 1];
                ptr2--;
            }
            int max = ptr2 - ptr1;
            while (ptr2 < n){
                time -= b[ptr1];
                ptr1++;
                while (ptr2 < n){
                    time += b[ptr2];
                    ptr2++;
                    if(time >= t)
                        break;
                }
                if(time > t){
                    time -= b[ptr2 - 1];
                    ptr2--;
                }
                if(ptr2 - ptr1 > max)
                    max = ptr2 - ptr1;
            }
            return max;
        }
        static void Main(string[] args)
        {
            string[] nt = Console.ReadLine().Split(' ');
            int n = int.Parse(nt[0]);
            int t = int.Parse(nt[1]);
            string[] s = Console.ReadLine().Split(' ');
            int max = MaximumBook(s, n, t);
            Console.WriteLine(max); 
        }
    }
}

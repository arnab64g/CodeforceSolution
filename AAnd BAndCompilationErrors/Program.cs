using System;
namespace AAnd_BAndCompilationErrors
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] s1 = Console.ReadLine().Split(' ');
            string[] s2 = Console.ReadLine().Split(' ');
            string[] s3 = Console.ReadLine().Split(' ');
            int[] a = new int[n];
            int[] b = new int[n - 1];
            int[] c = new int[n - 2];
            for (int i = 0; i < n - 2; i++){
                a[i] = int.Parse(s1[i]); 
                b[i] = int.Parse(s2[i]);
                c[i] = int.Parse(s3[i]);
            }
            b[n - 2] = int.Parse(s2[n - 2]);
            a[n - 1] = int.Parse(s1[n - 1]);
            a[n - 2] = int.Parse(s1[n - 2]);
            Array.Sort(a);
            Array.Sort(b);
            Array.Sort(c);
            bool found = false;
            int p1 = 0, p2 = 0;
            for (int i = 0; i < n - 2; i++){
                if(c[i] != b[i]){
                    p2 = b[i];
                    found = true;
                    break;
                }
            }
            if(!found)
                p2 = b[n - 2];
            found = false;
            for (int i = 0; i < n - 1; i++){
                if(b[i] != a[i]){
                    p1 = a[i];
                    found = true;
                    break;
                }
            }
            if(!found)
                p1 = a[n - 1];
            Console.WriteLine(p1);
            Console.WriteLine(p2);
        }
    }
}

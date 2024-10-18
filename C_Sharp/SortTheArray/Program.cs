using System;

namespace SortTheArray
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] s = Console.ReadLine().Split(' ');
            int[] a = new int[n];
            int[] b = new int[n];
            for (int i = 0; i < n; i++){
                a[i] = int.Parse(s[i]);
                b[i] = a[i];
            }
            Array.Sort(b);
            int v1 = 0, v2 = 0;;
            for (int i = 0; i < n; i++)
                if(a[i] != b[i]){
                    v1 = i;
                    break;
                }
            for (int i = n - 1; i >= 0; i--)
                if (a[i] != b[i]){
                    v2 = i;
                    break;
                }
            bool r = true;
            for (int i = v1, j = v2; i <= v2 || j >= v1; i++, j--){
              
                if (a[i] != b[j]){
                    r = false;
                    break;
                }
            }
            if(r){
                Console.WriteLine("yes");
                Console.WriteLine(++v1 + " " + ++v2);
            }
            else Console.WriteLine("no");
        }
    }
}

using System; 
namespace DominoPilling
{
    class Program
    {
        static void Main(string[] args)
        {
            int m, n, count, a, b;
            string []s = Console.ReadLine().Split(' ');
            m = int.Parse(s[0]);
            n = int.Parse(s[1]);
            if(m%2 == 0 || n%2 == 0)
                count = (n*m)/2;
            else{
                a = (m > n) ? m : n;
                b = (m < n) ? m : n;
                count = (a/2) * b;
                count += b/2;
            }
            Console.WriteLine(count);
        }
    }
}

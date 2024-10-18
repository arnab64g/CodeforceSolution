using System;
namespace WaterMekon
{
    class Program
    {
        static void Main(string[] args)
        {
            int w;
            w = Int32.Parse(Console.ReadLine());
            if (w > 2 && w % 2 == 0)
                Console.WriteLine("YES");
            else
                Console.WriteLine("NO");                
        }
    }
}

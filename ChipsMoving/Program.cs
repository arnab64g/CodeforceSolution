using System;

namespace ChipsMoving
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] s = Console.ReadLine().Split(' ');
            int cor;
            int odds = 0, evens = 0;
            for (int i = 0; i < n; i++){
                cor = int.Parse(s[i]);
                if(cor % 2 == 0)
                    evens++;
                else odds++;
            }
            if(evens < odds)
                Console.WriteLine(evens);
            else Console.WriteLine(odds);
        }
    }
}

using System;

namespace BoardMoves
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            long move;
            long totalMove = 0;
            long mult = 1;
            long[] index = new long[250000];
            index[0] = 0;
            int top = 1;
            for (long j = 3; j <= 499999; j += 2){
                move = 4 * (j - 1) *mult;
                totalMove += move;
                index[top++] = totalMove;
                mult++;
            }
            for (int i = 0; i < t; i++){
                int n = int.Parse(Console.ReadLine());
                Console.WriteLine(index[n/2]);
            }
        }
    }
}

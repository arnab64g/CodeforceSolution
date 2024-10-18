using System;

namespace CardConstructions
{
    class Program
    {
        static int BinarySearch(int[] index, int i, int f, int value)
        {
            int mid = (f + i) / 2;
            if(value >= index[mid - 1] && value < index[mid])
                return index[mid - 1];
            else if(value < index[mid - 1])
                return BinarySearch(index, i, mid - 1, value);
            else return BinarySearch(index, mid + 1, f, value);
        }
        static void Main(string[] args)
        {
            int[] index = new int[59415];
            for (int i = 1; i < 59415; i++)
                index[i] = index[i - 1] + 3 * i - 1;
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                int n = int.Parse(Console.ReadLine());
                if(n == 1){
                    Console.WriteLine(0);
                    continue;
                }
                int count = 0, temp = 0;
                while (true){
                    count++;   
                    temp = BinarySearch(index, 1, 59414, n);
                    n -= temp;
                    if(n < 2)
                        break;
                }
                Console.WriteLine(count);
            }
        }
    }
}

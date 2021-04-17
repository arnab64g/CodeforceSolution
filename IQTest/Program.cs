using System;
namespace IQTest
{
    class Program
    {
        static int countOddPos(int []x, int n){
            int pos = 0;
            for (int i = 0; i < n; i++){
                if(x[i]%2 == 1){
                    pos = i;
                    break;
                }
            }
            return pos+1;
        }
        static int countEvenPos(int []x, int n){
            int pos = 0;
            for (int i = 0; i < n; i++){
                if(x[i]%2 == 0){
                    pos = i;
                    break;
                }
            }
            return pos+1;
        }
        static void Main(string[] args)
        {
            int n, co = 0, ce = 0, pos;
            n = int.Parse(Console.ReadLine());
            int []numbers = new int[n];
            string []s = Console.ReadLine().Split(' ');
            for (int i = 0; i < n; i++)
                numbers[i] = int.Parse(s[i]);
            for (int i = 0; i < 3; i++){
                if (numbers[i]%2 == 0)
                    ce++;
                else co++;
            }
            if(ce < 2)
                pos = countEvenPos(numbers, n);
            else pos = countOddPos(numbers, n);
            Console.WriteLine(pos);
        }
    }
}

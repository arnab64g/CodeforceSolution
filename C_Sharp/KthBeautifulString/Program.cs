using System;

namespace KthBeautifulString
{
    class Program
    {
        static int BinarySearch(int[] index, int i, int f, int value){
            int mid = (f + i) / 2;
            if(value < index[mid] && value >= index[mid - 1])
                return mid - 1;
            else if(value <= index[mid - 1])
                return BinarySearch(index, i, mid - 1, value);
            else return BinarySearch(index, mid + 1, f, value);
        }
        static void Main(string[] args)
        {
            int[]  index = new int[63247];
            index[0] = 0;
            for (int i = 1; i < 63247; i++)
                index[i] = i+index[i - 1];
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s = Console.ReadLine().Split(' ');
                int n = int.Parse(s[0]);
                int k = int.Parse(s[1]);
                int b1 = 0, b2 = 1;;
                int pos; 
                k--;
                if(k > 0){
                    pos = BinarySearch(index, 1, 63246, k);
                    b2 += pos;
                    k -= index[pos];
                    b1 += k;
                }
                for (int j = n - 1; j >= 0; j--){
                    if(j == b1 || j == b2)
                        Console.Write('b');
                    else Console.Write('a');
                }
                Console.WriteLine();
            }
        }
    }
}

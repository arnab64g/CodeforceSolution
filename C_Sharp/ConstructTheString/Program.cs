using System;
namespace ConstructTheString
{
    class Program
    {
        static string StringGen(int n, int a, int b){
            string str = "";
            for (int i = 0; i < b; i++)
                str += Convert.ToChar(97+i);
            for (int i = b ; i < a; i++)
                str += str[i - b];
            for (int i = a; i < n; i++)
                str += str[i - a];
            return str;
        }
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string[] s = Console.ReadLine().Split(' ');
                int n = int.Parse(s[0]);
                int a = int.Parse(s[1]);
                int b = int.Parse(s[2]);
                Console.WriteLine(StringGen(n, a, b));
            }
        }
    }
}

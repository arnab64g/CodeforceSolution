using System;
namespace MoveBrackets
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                int l = int.Parse(Console.ReadLine());
                string s = Console.ReadLine();
                int openning = 0, closeng = 0;
                for (int j = 0; j < l; j++){
                    if (s[j] == '(')
                        openning++;
                    else{
                        if(openning == 0)
                            closeng++;
                        else openning--;
                    }
                }
                Console.WriteLine(closeng);
            }
        }
    }
}

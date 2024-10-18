using System;
using System.Collections.Generic;
class Program
{
    public static void Main(string[] args){
        int value, init;
        int t = int.Parse(Console.ReadLine());
        for (int i = 0; i < t; i++)
        {
            int n = int.Parse(Console.ReadLine());
            HashSet<int> hs = new HashSet<int>();
            init = 1;
            while (true){
                value = init * init;
                if(value <= n){
                    hs.Add(value);
                    init++;
                }
                else break;
            }
            init = 2;
            while (true){
                value = init * init * init;
                if(value <= n){
                    hs.Add(value);
                    init++;
                }
                else break;
            }
            Console.WriteLine(hs.Count);
        }
    }    
}
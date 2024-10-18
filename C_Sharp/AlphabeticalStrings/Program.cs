// See https://aka.ms/new-console-template for more information
using System;
class Program
{
    public static void Main(string[] args){
        int t = int.Parse(Console.ReadLine());
        for (int i = 0; i < t; i++)
        {
            string s = Console.ReadLine();
            int loc = -1, font = 26, rear = 26;
            for (int j = 0; j < s.Length; j++)
            {
                if(s[j] == 'a'){
                    loc = j;
                    font = j;
                    rear = j;
                    break;
                }
            }
            if(loc == -1){
                Console.WriteLine("NO");
            }
            else
            {
                char ch = 'a';
                int temp;
                while (true)
                {
                    ch++;
                    if(font > 0 && s[font - 1] == ch)
                        font--;
                    
                    else if(rear < s.Length - 1 && s[rear+1] == ch)
                        rear++;
                    else break;
                }
                if(font == 0 && rear == s.Length - 1)
                    Console.WriteLine("YES");
                else Console.WriteLine("NO");
            }
        }
    }    
}
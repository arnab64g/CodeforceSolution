using System;
using System.Collections.Generic;
namespace RegularBracketSequence
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string s = Console.ReadLine();
                int len = s.Length;
                if(s[0] == ')' || s[len - 1] == '(')
                    Console.WriteLine("NO");
                else{
                    Stack<char> st1 = new Stack<char>();
                    Stack<char> st2 = new Stack<char>();
                    bool res = true;
                    for (int j = 0; j < len; j++){
                        if(s[j] == '(')
                            st1.Push('(');
                        else if(s[j] == ')'){
                            if(st1.Count != 0)
                                st1.Pop();
                            else if(st2.Count != 0)
                                st2.Pop();
                            else{
                                res = false;
                                break;
                            }
                        }
                        else if(s[j] == '?')
                            st2.Push('?');
                    }
                    while (st1.Count != 0 && st2.Count != 0){
                        st1.Pop();
                        st2.Pop();
                    }
                    if(st1.Count != 0)
                        Console.WriteLine("NO");
                    else if(st2.Count % 2 == 0)
                        Console.WriteLine("YES");
                    else Console.WriteLine("NO");
                }
            }
        }
    }
}

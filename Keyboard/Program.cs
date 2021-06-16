using System;
namespace Keyboard
{
    class Program
    {
        static void Main(string[] args)
        {
            char ch = char.Parse(Console.ReadLine());
            char temp;
            string s = Console.ReadLine();
            const string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
            int len = s.Length;
            string res = "";
            for (int i = 0; i < len; i++){
                temp = s[i];
                for (int j = 0; j < 30; j++){
                    if (temp == str[j]){
                        if(ch == 'R')
                            res += str[j-1];
                        else res +=  str[j+1];
                        break;
                    }
                }
            }
            Console.WriteLine(res);
        }
    }
}

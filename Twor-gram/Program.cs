using System;
namespace Twor_gram
{
    class Program
    {
        struct CountStr{
            public string str;
            public int count;
        }
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            CountStr[] list = new CountStr[n - 1];
            int len = 0;
            for (int i = 0; i < n-1; i++){
                string temp = "";
                temp += s[i];
                temp += s[i+1];
                bool found = false;
                for (int j = 0; j < len; j++)
                    if(temp == list[j].str){
                        list[j].count++;
                        found = true;
                        break;
                    }
                if(!found){
                    list[len].str = temp;
                    list[len++].count = 1;
                }
            }
            CountStr res = list[0];
            for (int i = 0; i < len; i++)
                if(res.count < list[i].count){
                    res.count = list[i].count;
                    res.str = list[i].str;
                }
            Console.WriteLine(res.str);
        }
    }
}

using System;

namespace Lecture
{
    class Program
    {
        struct Words{
            public string str;
            public string shorter;
        };
        static void BinarySearch(Words[] words, string s, int init, int final){
            int mid = (final + init) / 2;
            if(string.Compare(s, words[mid].str) < 0)
                BinarySearch(words, s, init, mid - 1);
            else if(string.Compare(s, words[mid].str) > 0)
                BinarySearch(words, s, mid+1, final);
            else Console.Write(words[mid].shorter+" ");
        }
        static void MargeSort(Words[] s, int init, int mid, int f)
        {
            Words[] temp = new Words[f - init +1];
            int top = 0;
            int i = init, j = mid;
            while (i < mid && j <= f){
                if( string.Compare(s[i].str , s[j].str) < 0){
                    temp[top].str = s[i].str;
                    temp[top++].shorter = s[i++].shorter;
                }
                else{
                    temp[top].str = s[j].str;
                    temp[top++].shorter = s[j++].shorter;
                }
            }
            while (i < mid){
                temp[top].str = s[i].str;
                temp[top++].shorter = s[i++].shorter;
            }
            while (j <= f){
                temp[top].str = s[j].str;
                temp[top++].shorter = s[j++].shorter;
            }
            int c = 0;
            for (int k = init; k <= f; k++){
                s[k].str = temp[c].str;
                s[k].shorter = temp[c++].shorter;
            }
        }
        static void Marge(Words[] s, int init, int f)
        {
            if (f > init){
                int mid = (f+init) / 2;
                Marge(s, init, mid);
                Marge(s, mid+1, f);
                MargeSort(s, init, mid+1, f);
            }
        }
        static void Main(string[] args)
        {
            string[] nm = Console.ReadLine().Split(' ');
            int n = int.Parse(nm[0]);
            int m = int.Parse(nm[1]);
            Words[] w = new Words[m];
            int ptr = 0;
            for (int i = 0; i < m; i++){
                string[] st = Console.ReadLine().Split(' ');
                string s;
                if(st[1].Length < st[0].Length)
                    s = st[1];
                else s = st[0];
                w[ptr].str = st[0];
                w[ptr++].shorter = s;
            }
            Marge(w, 0, m - 1);
            string[] str = Console.ReadLine().Split(' '); 
            for (int i = 0; i < n; i++)
                BinarySearch(w, str[i], 0, m - 1);
            Console.WriteLine();
        }
    }
}

using System;

namespace Exams
{
    class Program
    {
        struct ExamSchedule
        {
            public int a;
            public int b;
        }
        static void Marge(ExamSchedule[] es, int i, int f)
        {
            if(f > i){
                int mid = (f + i) / 2;
                Marge(es, i, mid);
                Marge(es, mid + 1, f);
                MargeSort(es, i, mid + 1, f);
            }
        }
        static void MargeSort(ExamSchedule[] es, int i, int m, int f)
        {
            ExamSchedule[] temp = new ExamSchedule[f - i + 1];
            int l = i, r = m;
            int top = 0;
            while (l < m && r <= f){
                if(es[l].a > es[r].a){
                    temp[top].a = es[r].a;
                    temp[top++].b = es[r++].b;
                }
                else if(es[l].a < es[r].a){
                    temp[top].a = es[l].a;
                    temp[top++].b = es[l++].b;
                }
                else{
                    if(es[l].b < es[r].b){
                        temp[top].a = es[l].a;
                        temp[top++].b = es[l++].b;
                    }
                    else{
                        temp[top].a = es[r].a;
                        temp[top++].b = es[r++].b;
                    }
                }
            }
            while (l < m){
                temp[top].a = es[l].a;
                temp[top++].b = es[l++].b;
            }
            while (r <= f){
                temp[top].a = es[r].a;
                temp[top++].b = es[r++].b;
            }
            for (int j = i, k = 0; j <=f; j++, k++){
                es[j].a = temp[k].a;
                es[j].b = temp[k].b;
            }
        }
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            ExamSchedule[] es = new ExamSchedule[n];
            for (int i = 0; i < n; i++){
                string[] s = Console.ReadLine().Split(' ');
                es[i].a = int.Parse(s[0]);
                es[i].b = int.Parse(s[1]);
            }
            Marge(es, 0, n - 1);
            int lstExm, min, max;
            if(es[0].a < es[0].b)
                lstExm = es[0].a;
            else lstExm = es[0].b;
            for (int i = 1; i < n; i++){
                if(es[i].a > es[i].b){
                    max = es[i].a;
                    min = es[i].b;
                }
                else{
                    min = es[i].a;
                    max = es[i].b;
                }
                if(lstExm <= min)
                    lstExm = min;
                else lstExm = max;
            }
            Console.WriteLine(lstExm);
        }
    }
}

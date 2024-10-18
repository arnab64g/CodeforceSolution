using System;
namespace Laptops
{
    class Program
    {
        struct LaptopPrice
        {
            public int price;
            public int quality;
        }
        static void MargeSortAD(LaptopPrice[] lp, int init, int mid, int f)
        {
            int li = init;
            int ri = mid;
            LaptopPrice[] temp = new LaptopPrice[f - init + 1];
            int top = -1;
            while (li < mid && ri <= f){
                if (lp[li].price < lp[ri].price){
                    temp[++top].price = lp[li].price;
                    temp[top].quality = lp[li++].quality;
                }
                else{
                    temp[++top].price = lp[ri].price;
                    temp[top].quality = lp[ri++].quality;
                }
            }
            while (li < mid){
                temp[++top].price = lp[li].price;
                temp[top].quality = lp[li++].quality;
            }
            while (ri <= f){
                temp[++top].price = lp[ri].price;
                temp[top].quality = lp[ri++].quality;
            }
            for (int i = f; i >= init; i--)
            {
                lp[i].price = temp[top].price;
                lp[i].quality = temp[top--].quality;
            }
        }
        static void MargeSort(LaptopPrice[] lp, int init, int lst)
        {
            if(init >= lst)
                return;
            int mid = (lst + init) / 2;
            MargeSort(lp, init, mid);
            MargeSort(lp, mid+1, lst);
            MargeSortAD(lp, init, mid+1, lst);
        }
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            LaptopPrice[] lp = new LaptopPrice[n];
            for (int i = 0; i < n; i++){
                string[] s = Console.ReadLine().Split(' ');
                lp[i].price = int.Parse(s[0]);
                lp[i].quality = int.Parse(s[1]);
            }
            MargeSort(lp, 0, n - 1);
            bool res = false;
            for (int i = 1; i < n; i++)
                if(lp[i].quality < lp[i-1].quality){
                    res = true;
                    break;
                }
            if(res)
                Console.WriteLine("Happy Alex");
            else Console.WriteLine("Poor Alex");
        }
    }
}

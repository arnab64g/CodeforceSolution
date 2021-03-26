using System;

namespace AntonAndPolyhedrons
{
    class Program
    {
        int match(string s){
            if (s == "Tetrahedron")
                return 4;
            else if(s == "Cube")
                return 6;
            else if(s == "Octahedron")
                return 8;
            else if(s == "Dodecahedron")
                return  12;
            else if(s ==  "Icosahedron")
                return 20;
            else
                return 0;

        }
        static void Main(string[] args)
        {
            Program p =  new Program();
            int n, value, sum = 0;
            n = int.Parse(Console.ReadLine());
            string s;
            for (int i = 0; i < n; i++){
                s = Console.ReadLine();
                value = p.match(s);
                sum += value;
            }
            Console.WriteLine(sum);
        }
    }
}

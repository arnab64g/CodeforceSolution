using System;

namespace Football
{
    class Program
    {
        struct TeamGoal{
            public string name;
            public int goal;
        }
        static void Main(string[] args)
        {
            TeamGoal tg1, tg2;
            tg1.name = "";
            tg1.goal = 0;
            tg2.name = "";
            tg2.goal = 0;
            int t = int.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++){
                string s = Console.ReadLine();
                if(tg1.name == "")
                    tg1.name += s;
                else if (tg2.name == "" && tg1.name != s)
                    tg2.name += s;
                if (s == tg1.name)
                    tg1.goal++;
                else if(s == tg2.name)
                    tg2.goal++;
            }
            if(tg1.goal > tg2.goal)
                Console.WriteLine(tg1.name);
            else 
                Console.WriteLine(tg2.name);
        }
    }
}

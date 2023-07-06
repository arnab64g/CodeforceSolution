// See https://aka.ms/new-console-template for more information
int t = int.Parse(Console.ReadLine());

for (int i = 0; i < t; i++)
{
    int n = int.Parse(Console.ReadLine());
    string[] str = Console.ReadLine().Split(' ');

    int longets = 0, val = 0;
    for (int j = 0; j < n; j++)
    {
        if (str[j] == "0")
        {
            val++;
            if (val > longets)
            {
                longets = val;
            }
        }
        else
        {
            val = 0;
        }
    }
    Console.WriteLine(longets);
}
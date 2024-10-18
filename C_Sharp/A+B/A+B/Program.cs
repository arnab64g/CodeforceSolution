// See https://aka.ms/new-console-template for more information
int t = int.Parse(Console.ReadLine());
for (int i = 0; i < t; i++)
{
    string[] s = Console.ReadLine().Split('+');
    Console.WriteLine(int.Parse(s[0]) + int.Parse(s[1]));
}


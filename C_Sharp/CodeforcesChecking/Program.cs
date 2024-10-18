int n = int.Parse(Console.ReadLine());

List<string> ch = new List<string>();

ch.Add("c");
ch.Add("o");
ch.Add("d");
ch.Add("e");
ch.Add("f");
ch.Add("r");
ch.Add("s");

for (int i = 0; i < n; i++)
{
    string str = Console.ReadLine();

    if (ch.Contains(str))
    {
        Console.WriteLine("Yes");
    }
    else
    {
        Console.WriteLine("No");
    }
}

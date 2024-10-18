int n = int.Parse(Console.ReadLine());
for (int i = 0; i < n; i++)
{
    int rating = int.Parse(Console.ReadLine());
	if (rating <= 1399 )
	{
		Console.WriteLine("Division 4");
	}
	else if (rating >= 1400 && rating <= 1599)
	{
		Console.WriteLine("Division 3");
	}
	else if (rating >= 1600 && rating <= 1899)
	{
		Console.WriteLine("Division 2");
	}
	else
	{
		Console.WriteLine("Division 1");
	}
}
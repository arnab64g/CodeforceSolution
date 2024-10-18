int n = int.Parse(Console.ReadLine());
for (int i = 0; i < n; i++)
{
    string[] s = Console.ReadLine().Split(' ');
	int[] nums = new int[3];
	for (int j = 0; j < 3; j++)
	{
		nums[j] = int.Parse(s[j]);
	}
	Array.Sort(nums);
	if (nums[0] + nums[1] == nums[2])
	{
		Console.WriteLine("YES");
	}
	else {
		Console.WriteLine("NO");

	}
}
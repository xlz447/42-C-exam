int	find_pivot(int *arr, int n)
{
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < n; i++)
		sum1 += arr[i];
	for (int i = 0; i < n; i++)
	{
		if(sum2 == sum1 - sum2 - arr[i])
			return i;
		sum2 += arr[i];
	}
	return -1;
}

int check(int n)
{
	int dem = 0;
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			dem++;
		}
	}
	if (dem == 0)
	{
		return 1;
	}
	else return 0;
}
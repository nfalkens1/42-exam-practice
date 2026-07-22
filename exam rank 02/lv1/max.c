int		max(int* tab, unsigned int len)
{
	int i = 0;
	int j = 0;

	while (tab[i])
	{
		if (tab[i] > j)
			j = tab[i];
		i++;
	}
	return (j);
}

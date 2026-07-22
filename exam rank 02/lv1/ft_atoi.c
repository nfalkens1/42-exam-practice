int	ft_atoi(const char *str)
{
	int	nbr = 0;
	int sign_flag = 1;
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign_flag = -1;
		i++; 
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		nbr = (nbr *10) + (str[i++] - '0');
		return (nbr * sign_flag);
}

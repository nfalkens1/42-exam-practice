#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}


int main(int ac, char **av)
{
	int i = 0;
	int s = 0;
	int r = 0;

	if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
	{
		while(av[1][i])
		{
			if (av[1][i] == av[2][s])
				av[1][i] = av[3][r];
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
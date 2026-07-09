#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[1][i] != av[2][j] && av[2][j])
				j++;
			if (av[2][j] == '\0')
			{
				write(1, "0\n", 2);
				return (0);
			}
			j++;
			i++;
		}
		write(1, "1", 1);
	}
	write(1, "\n", 1);
	return (0);
}

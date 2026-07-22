#include <unistd.h>

int skip_ws(char *str)
{
	int i = 0;

	while ((str[i] == ' ' || str[i] == '\t') && str[i])
		i++;
	
	return (i);
}

int main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = skip_ws(av[1]);

		while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
			write(1, &av[1][i++], 1);
	}
	write (1, "\n", 1);
	return (0);
}
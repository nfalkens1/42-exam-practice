#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int res;
	int	a;
	int b;

	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);

		if (av[2][0] == '*')
			res = a * b;
		if (av[2][0] == '/')
			res = a / b;
		if (av[2][0] == '%')
			res = a % b;
		if (av[2][0] == '-')
			res = a - b;
		if (av[2][0] == '+')
			res = a + b;
		printf("%i\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *dest;
	int i = 0;

	dest = malloc(sizeof (char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

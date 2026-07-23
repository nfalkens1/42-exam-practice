#include <stdlib.h>
#include <stdio.h>

int is_whitespace(char c) 
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int count_words(char *str)
{
	int i = 0;
	int word_count = 0;
	int lock = 1;

	while (str[i])
	{
		if (!is_whitespace(str[i]) && lock == 1)
		{
			word_count++;
			lock = 0;
		}
		else if (is_whitespace(str[i]))
			lock = 1;
		i++;
	}
	return (word_count);
}

int word_len(char *str)
{
	int i = 0;
	while(str[i] && !is_whitespace(str[i]))
		i++;
	return (i);
}

char    **ft_split(char *str)
{
	char **arr;
	int i = 0;
	int j = 0;
	int start = 0;

	if (!str)
		return NULL;

	arr = malloc(sizeof(char *) * (count_words(str) + 1));

	while(str[i])
	{
		while (is_whitespace(str[i]))
			i++;
		if (str[i])
		{
			arr[j] = malloc(word_len(&str[i]) + 1);
			while (!is_whitespace(str[i]) && str[i])
			{
				arr[j][start] = str[i];
				start++;
				i++;
			}
			arr[j][start] = '\0';
			start = 0;
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

/*
int main(void)
{
	int i = 0;
	char *str;
	char **arr;

	str = "This is 4 Strings";
	printf("before: %s\n", str);
	arr = ft_split(str);
	printf("after:\n");
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}
*/
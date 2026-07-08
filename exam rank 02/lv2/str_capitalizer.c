#include <unistd.h>

char    *capitalizer(char *str)
{
    int i;
    int flag;

    flag = 1;
    i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z' && flag == 0)
            str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z' && flag == 1)
        {
            str[i] -= 32;
            flag = 0;
        }
        if ((str[i] == '\t' || str[i] == ' ') && flag == 0)
            flag = 1;
        else if (str[i] != '\t' && str[i] != ' ')
            flag = 0;
        i++;
    }
    return (str);
}

int ft_putstr(char  *str)
{
    int i;

    i = 0;

    while (str[i])
        write(1, &str[i++], 1);

    return (0);
}

int main(int ac, char **av)
{
    int i;

    i = 1;
    while (i < ac)
    {
        ft_putstr(capitalizer(av[i]));
        write(1, "\n", 1);
        i++;
    }
    if (ac <= 1)
        write(1, "\n", 1);
}

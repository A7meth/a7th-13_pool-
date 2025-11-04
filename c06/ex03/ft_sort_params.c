#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	x;
	char	*c;

	x = 1;
	while (x < ac - 1)
	{
		if (ft_strcmp(av[x], av[x + 1]) > 0)
		{
			c = av[x];
			av[x] = av[x + 1];
			av[x + 1] = c;
			x = 0;
		}
		x++;
	}
	x = 1;
	while (x < ac)
		ft_putstr(av[x++]);
	return (0);
}

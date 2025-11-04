#include<unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while ( --ac)
	{
		char *s = *++av;
		while (*s)
			write(1, s++, 1);
		write(1, "\n", 1);
	}
	return (0);
}

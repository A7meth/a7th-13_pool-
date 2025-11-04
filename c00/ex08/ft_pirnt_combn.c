#include <unistd.h>

void	rec(int n, int i, char *buf, int pos)
{
	while (i <= 10 - n + pos)
	{
		buf[pos] = '0' + i;
		if (pos == n - 1)
		{
			write(1, buf, n);
			if (buf[0] != 10 - n)
				write(1, ", ", 2);
		}
		else
			rec(n, i + 1, buf, pos + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	buf[10];

	rec(n, 0, buf, 0);
}

/*
int	main()
{
	ft_print_combn(2);
	write(1, "\n", 1);
	return(0);
}
*/

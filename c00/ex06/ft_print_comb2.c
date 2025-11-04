#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write(1, &(char){'0' + a / 10}, 1);
			write(1, &(char){'0' + a % 10}, 1);
			write(1, " ", 1);
			write(1, &(char){'0' + b / 10}, 1);
			write(1, &(char){'0' + b % 10}, 1);
			if (!(b == 99 && a == 98))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*
int	main()
{
	ft_print_comb2();
	write(1, "\n", 1);
	return(0);
}
*/

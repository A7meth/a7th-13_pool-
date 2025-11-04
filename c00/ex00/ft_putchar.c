#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int	main()
{
	ft_putchar('1');
	ft_putchar('3');
	ft_putchar('3');
	ft_putchar('7');
	ft_putchar('\n');
	return(0);
}
*/

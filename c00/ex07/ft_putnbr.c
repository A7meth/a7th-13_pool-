#include <unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	write(1, &(char){(nbr % 10) + '0'}, 1);
}

/*
int	main()
{
	ft_putnbr(1337);
	write(1, "\n", 1);
	return(0);
}
*/

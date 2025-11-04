#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483647)
		{
			write(1, "2147483647", 10);
			return ;
		}
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, &(char){(nb % 10) + '0'}, 1);
}

/*
int	main()
{
	ft_putnbr(1337);
	write(1, "\n", 1);
	return(0);
}
*/

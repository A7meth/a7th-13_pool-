int	ft_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (0);
	while (!ft_prime(nb))
		nb++;
	return (nb);
}
/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(12));
	return(0);
}
*/

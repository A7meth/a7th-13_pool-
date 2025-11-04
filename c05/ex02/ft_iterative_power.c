int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	while (power--)
		r *= nb;
	return (r);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(11, 3));
	return(0);
}
*/

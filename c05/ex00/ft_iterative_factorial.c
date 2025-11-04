int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	while (nb > 1)
		f *= nb--;
	return (f);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_factorial(7));
	return(0);
}
*/

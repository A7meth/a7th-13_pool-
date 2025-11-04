void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include<stdio.h>
int	main()
{
	int	D;
	int	M;

	ft_div_mod(7, 2, &D, &M);
	printf("M = %d\nD = %d\n", M, D);
	return(0);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	*a /= *b;
	*b = *a % *b;
}

/*
#include<stdio.h>
int	main()
{
	int	a = 7;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("a = %d \nb = %d\n", a, b);
	return(0);
}
*/

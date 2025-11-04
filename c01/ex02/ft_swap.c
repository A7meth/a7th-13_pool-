void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
#include<stdio.h>
int	main()
{
	int	a;
	int	b;

	a = 13;
	b = 42;
	ft_swap(&a, &b);
	printf("a = %d & b = %d\n", a, b);
	return(0);
}
*/

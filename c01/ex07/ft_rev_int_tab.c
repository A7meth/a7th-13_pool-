void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	i = 0;
	while (i++ < size / 2)
	{
		a = tab[i - 1];
		tab[i - 1] = tab[size - i];
		tab[size - i] = a;
	}
}

/*
#include<stdio.h>
int	main()
{
	int	R[] = {1, 3, 3, 7};
	int	s = sizeof(R)/sizeof(R[0]);
	int	i;
	ft_rev_int_tab(R, s);
	for(i=0;i<s;i++)
		printf("%d ",R[i]);
	printf("\n");
	return(0);
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

/*
#include<stdio.h>
int	main()
{
	int	R[] = {4, 2, 1, 3, 3, 7};
	int	size = sizeof(R)/sizeof(R[0]);

	ft_sort_int_tab(R, size);
	for(int i = 0; i < size; i++)
		printf("%d", R[i]);
	printf("\n");
	return(0);
}
*/

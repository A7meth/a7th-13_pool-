int	ft_sqrt(int nb)
{
	int	s;

	s = 1;
	while (s * s < nb)
		s++;
	if (s * s == nb)
		return (s);
	return (0);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(1369));
	return(0);
}
*/

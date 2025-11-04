int	ft_fibonacci(int index)
{
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_fibonacci(7));
	return (0);
}
*/

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_numeric("1337"));
	printf("%d\n", ft_str_is_numeric("1337fjib"));
	printf("%d\n", ft_str_is_numeric("fjib"));
	return(0);
}
*/

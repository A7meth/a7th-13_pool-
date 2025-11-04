int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'
				|| *str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_alpha("1337"));
	printf("%d\n", ft_str_is_alpha("fjib"));
	printf("%d\n", ft_str_is_alpha("1337fjib"));
	return(0);
}
*/

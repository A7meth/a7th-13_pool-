int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_printable("@7th"));
	printf("%d\n", ft_str_is_printable("@7TH"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("	"));
	return(0);
}
*/

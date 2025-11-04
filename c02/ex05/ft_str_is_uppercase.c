int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_uppercase("ASVNTH"));
	printf("%d\n", ft_str_is_uppercase("AsVnTh"));
	printf("%d\n", ft_str_is_uppercase("asvnth"));
	return(0);
}
*/

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_str_is_lowercase("asvnth"));
	printf("%d\n", ft_str_is_lowercase("ASVNTH"));
	printf("%d\n", ft_str_is_lowercase("aSvNtH"));
	return(0);
}
*/

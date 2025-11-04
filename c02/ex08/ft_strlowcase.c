char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include<stdio.h>
int	main()
{
	char	s1[] = "ASVNTH";
	char	s2[] = "asvnth";
	char	s3[] = "AsVnTh";
	char	s4[] = "ASV?NTH";

	printf("%s\n", ft_strlowcase(s1));
	printf("%s\n", ft_strlowcase(s2));
	printf("%s\n", ft_strlowcase(s3));
	printf("%s\n", ft_strlowcase(s4));
	return(0);
}
*/

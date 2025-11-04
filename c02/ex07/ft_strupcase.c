char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include<stdio.h>

int	main()
{
	char	s1[] = "asvnth";
	char	s2[] = "ASVNTH";
	char	s3[] = "AsVnTh";
	char	s4[] = "aSvNtH";

	printf("%s\n", ft_strupcase(s1));
	printf("%s\n", ft_strupcase(s2));
	printf("%s\n", ft_strupcase(s3));
	printf("%s\n", ft_strupcase(s4));
	return(0);
}
*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nxtwrd;

	i = 0;
	nxtwrd = 1;
	while (str[i])
	{
		if (nxtwrd && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			nxtwrd = 0;
		}
		else if ((str[i] < 'a' || str[i] > 'z')
			&& (str[i] < 'A' || str[i] > 'Z'))
			nxtwrd = 1;
		i++;
	}
	return (str);
}

/*
#include<stdio.h>
int	main()
{
	char	s1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	s2[] = "asvnth saksrblak";

	printf("%s\n", ft_strcapitalize(s1));
	printf("%s\n", ft_strcapitalize(s2));
	return(0);
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_strncmp("1338", "1337", 4));
	printf("%d\n", ft_strncmp("1338", "1337", 2));
	return(0);
}
*/

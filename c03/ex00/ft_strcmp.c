int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_strcmp("42", "1337"));
	return(0);
}
*/

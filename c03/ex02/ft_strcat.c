char	*ft_strcat(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (*src)
		*p++ = *src++;
	return (dest);
}

/*
#include<stdio.h>
int	main()
{
	char	d[13] = "42";
	printf("%s\n", ft_strcat(d, "1337"));
	return(0);
}
*/

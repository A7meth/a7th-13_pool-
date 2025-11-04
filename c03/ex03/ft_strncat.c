char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (*src && nb--)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}

/*
#include<stdio.h>
int	main()
{
	char	dst[5] = "42";

	printf("%s\n", ft_strncat(dst, "1337", 3));
	return(0);
}
*/

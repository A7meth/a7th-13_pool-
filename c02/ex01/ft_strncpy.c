char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < n)
			dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*
#include<stdio.h>
int	main()
{
	char	dst[1337] = "42";
	ft_strncpy(dst, "1331", 2);
	printf("%s\n", dst);
	return(0);
}
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < size - 1)
			dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i < size ? i : size - 1] = '\0';
	return (i);
}

/*
#include<stdio.h>
int	main()
{
	char	dst[] = "42";
	char	src[] = "1337";
	int	size = sizeof(dst) / sizeof(dst[0]);
	printf("%d\n", ft_strlcpy(dst, src, size));
	printf("%s\n", dst);
	return(0);
}
*/

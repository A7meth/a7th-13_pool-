unsigned int	ft_strlcat(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	i = 0;
	while (src[i])
	{
		if (i < size - 1)
			dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i < size ? i : size - 1] = '\0';
	return(i);
}

/*
#include<stdio.h>
int	main()
{
	char	dst[] = "1337";
	char	src[] = "424242";
	int	size = sizeof(dst) / sizeof(dst[0]);
	
	printf("%d\n", ft_strlcat(dst, src, size));
	printf("dst=%s & src=%s\n", dst, src);
	return (0);
}
*/

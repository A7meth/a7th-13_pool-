char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
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
	ft_strcpy(dst, "1337");
	printf("%s\n", dst);
	return(0);
}
*/

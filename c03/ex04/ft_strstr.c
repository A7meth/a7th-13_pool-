char	*ft_strstr(char *str, char *to_find)
{
	char	*t;
	char	*s;

	if (!*to_find)
		return (str);
	while (*str)
	{
		t = to_find;
		s = str;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (!*t)
			return (str);
		str++;
	}
	return (0);
}

/*
#include<stdio.h>
int	main()
{
	printf("%s\n", ft_strstr("1337/42", "/"));
	return(0);
}
*/

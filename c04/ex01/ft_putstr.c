#include <unistd.h>

char	*ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (str);
}

/*
int	main()
{
	ft_putstr("1337");
	write(1, "\n", 1);
	return(0);
}
*/

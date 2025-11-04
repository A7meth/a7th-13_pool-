int	is_valid_base(char *b)
{
	int	i;
	int	j;

	i = 0;
	while (b[i])
	{
		if (b[i] == '+' || b[i] == '-')
			return (0);
		j = i + 1;
		while (b[j])
			if (b[i] == b[j++])
				return (0);
		i++;
	}
	return (i > 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	i;
	int	l;

	if (!is_valid_base(base))
		return (0);
	l = 0;
	while (base[l])
		l++;
	n = 0;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			n = -1;
	while (*str)
	{
		i = 0;
		while (i < l && base[i] != *str)
			i++;
		if (i == l)
			break ;
		n = (n < 0 ? n * l - i : n * l + i);
		str++;
	}
	return (n);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base("1011", "01"));
	printf("%d\n", ft_atoi_base("-1A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("+7F", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("zzz", "abcdefghijklmnopqrstuvwxyz"));
	printf("%d\n", ft_atoi_base("++--13", "0123456789"));
	printf("%d\n", ft_atoi_base("42", "0123456789"));
	return (0);
}
*/

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '+')
		i++;
	if ((str[i] >= 'A' && str[i] <= 'Z')
		|| (str[i] >= 'a' && str[i] <= 'z'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

/*
#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("    13fjib37"));
	return (0);
}
*/

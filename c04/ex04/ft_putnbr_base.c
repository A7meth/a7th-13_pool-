#include <unistd.h>

int	check_base(char *b)
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	l;
	unsigned int	n;

	if (!check_base(base))
		return ;
	l = 0;
	while (base[l])
		l++;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	if (n >= (unsigned int)l)
		ft_putnbr_base(n / l, base);
	write(1, &base[n % l], 1);
}

/*
int main()
{
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(13, "01");
	write(1,"\n", 1);
	ft_putnbr_base(7, "poneyvif");
	write(1, "\n", 1);
	return (0);
}
*/

#include <unistd.h>

static void	p_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

static void	p_char(unsigned char c)
{
	if (c < 32 || c > 126)
		write(1, ".", 1);
	else
		write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*p;

	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 16 && i + j < size)
		{
			p_hex(p[i + j]);
			if (j % 2)
				write(1, " ", 1);
			j++;
		}
		while (j++ < 16)
			write(1, "   ", 3);
		j = 0;
		while (j < 16 && i + j < size)
			p_char(p[i + j++]);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

/*
int	main(void)
{
	char	*s1 = "Bonjour les amin";
	char	*s2 = "ches...c. est fo";
	char	*s3 = "u.tout.ce qu on";
	char	*s4 = "peut faire avec.";
	char	*s5 = "..print_memory..";
	char	*s6 = "..lol.lol. .";

	ft_print_memory(s1, 17);
	ft_print_memory(s2, 17);
	ft_print_memory(s3, 16);
	ft_print_memory(s4, 17);
	ft_print_memory(s5, 17);
	ft_print_memory(s6, 15);
	return(0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/18 19:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int	n;
	int	sign;

	sign = 1;
	n = 0;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n * sign);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	calc(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/' && b)
		return (a / b);
	if (op == '%' && b)
		return (a % b);
	if (op == '/' && !b)
		write(1, "Stop : division by zero\n", 24);
	else if (op == '%' && !b)
		write(1, "Stop : modulo by zero\n", 22);
	else
		write(1, "0\n", 2);
	return (0);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 4 || av[2][1])
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	ft_putnbr(calc(a, b, av[2][0]));
	write(1, "\n", 1);
	return (0);
}

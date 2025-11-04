/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7meth <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:00:10 by a7meth            #+#    #+#             */
/*   Updated: 2025/11/03 16:00:10 by a7meth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	ft_atoi(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

void	print_grid(int grid[4][4])
{
	int	i;
	int	j;
	char	c;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}


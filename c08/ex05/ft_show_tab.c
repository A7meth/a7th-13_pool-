/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 18:15:00 by a7th              #+#    #+#             */
/*   Updated: 2025/10/05 18:15:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *p)
{
	int	i;

	i = 0;
	while (p[i].str)
	{
		ft_putstr(p[i].str);
		write(1, "\n", 1);
		ft_putnbr(p[i].size);
		write(1, "\n", 1);
		ft_putstr(p[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*
#include <stdlib.h>
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int	main(void)
{
	char *arr[] = {"Hello", "42", "World"};
	struct s_stock_str *tab = ft_strs_to_tab(3, arr);
	ft_show_tab(tab);
	return (0);
}
*/

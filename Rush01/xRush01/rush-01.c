/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7meth <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:00:40 by a7meth            #+#    #+#             */
/*   Updated: 2025/11/03 16:00:40 by a7meth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

static int	parse_input(char *str, int *clues)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (j >= 16)
				return (0);
			clues[j++] = str[i] - '0';
		}
		else if (str[i] != ' ' && str[i] != '\t')
			return (0);
		i++;
	}
	return (j == 16);
}

int	main(int ac, char **av)
{
	int	clues[16];
	int	grid[4][4];
	int	i;
	int	j;

	if (ac != 2 || !parse_input(av[1], clues))
	{
		ft_putstr("Error\n");
		return (1);
	}
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			grid[i][j] = 0;
	}
	if (solve(grid, clues, 0))
		print_grid(grid);
	else
		ft_putstr("Error\n");
	return (0);
}


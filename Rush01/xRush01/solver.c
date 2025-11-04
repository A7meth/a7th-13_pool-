/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7meth <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:00:30 by a7meth            #+#    #+#             */
/*   Updated: 2025/11/03 16:00:30 by a7meth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

int	solve(int grid[4][4], int clues[16], int pos)
{
	int	row;
	int	col;
	int	val;

	if (pos == 16)
		return (check_row(grid, 0, clues)
			&& check_row(grid, 1, clues)
			&& check_row(grid, 2, clues)
			&& check_row(grid, 3, clues)
			&& check_col(grid, 0, clues)
			&& check_col(grid, 1, clues)
			&& check_col(grid, 2, clues)
			&& check_col(grid, 3, clues));
	row = pos / 4;
	col = pos % 4;
	val = 0;
	while (++val <= 4)
	{
		if (is_valid(grid, row, col, val))
		{
			grid[row][col] = val;
			if (solve(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
	}
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7meth <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:00:20 by a7meth            #+#    #+#             */
/*   Updated: 2025/11/03 16:00:20 by a7meth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush-01.h"

static int	count_visible(int *arr)
{
	int	i;
	int	max;
	int	count;

	i = -1;
	max = 0;
	count = 0;
	while (++i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			count++;
		}
	}
	return (count);
}

int	check_row(int grid[4][4], int row, int *clues)
{
	int	left;
	int	right;
	int	i;
	int	arr[4];

	i = -1;
	while (++i < 4)
		arr[i] = grid[row][i];
	left = clues[8 + row];
	right = clues[12 + row];
	if (count_visible(arr) != left)
		return (0);
	i = -1;
	while (++i < 4)
		arr[i] = grid[row][3 - i];
	if (count_visible(arr) != right)
		return (0);
	return (1);
}

int	check_col(int grid[4][4], int col, int *clues)
{
	int	up;
	int	down;
	int	i;
	int	arr[4];

	i = -1;
	while (++i < 4)
		arr[i] = grid[i][col];
	up = clues[col];
	down = clues[4 + col];
	if (count_visible(arr) != up)
		return (0);
	i = -1;
	while (++i < 4)
		arr[i] = grid[3 - i][col];
	if (count_visible(arr) != down)
		return (0);
	return (1);
}

int	is_valid(int grid[4][4], int row, int col, int val)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (grid[row][i] == val || grid[i][col] == val)
			return (0);
	}
	return (1);
}

